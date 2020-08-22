#include "DungeonMythicPlus.h"
#include "Containers.h"
#include "DB2Stores.h"
#include "GameTables.h"
#include "Item.h"
#include "LootPackets.h"



ChallengeMode* ChallengeMode::instance()
{
    static ChallengeMode MPM;
    return &MPM;
}

const MapChallengeModeEntry* ChallengeMode::GetChallengeMap(uint32 mapId)
{

    for (size_t i = 0; i < sMapChallengeModeStore.GetNumRows(); i++)
    {
        if (const MapChallengeModeEntry* mapDiffEntry = sMapChallengeModeStore.LookupEntry(i))
            if (mapDiffEntry->MapID == mapId)
                return mapDiffEntry;
    }
    return nullptr;
}
uint32 ChallengeMode::GetDamageMultiplier(uint8 mythiclevel)
{
    
    if (const GtChallengeModeDamageEntry* mpDamage = sChallengeModeDamageGameTable.GetRow(mythiclevel))
        return uint32(100.0f * (mpDamage->Scalling - 1.0f));

    return 1;
}
uint32 ChallengeMode::GetHealthMultiplier(uint8 mythiclevel)
{

    if (const GtChallengeModeHealthEntry* mpDamage = sChallengeModeHealthGameTable.GetRow(mythiclevel))
        return uint32(100.0f * (mpDamage->Scalling - 1.0f));

    return 1;
}

//garbage need to be fixed
uint32 ChallengeMode::GetRandomNextMythicMap()
{
        std::vector<uint32>maps;
        uint32 size = sMapChallengeModeStore.GetNumRows();
        maps.reserve(size);
        for (size_t i = 0; i < size; i++)
        {
            if(const MapChallengeModeEntry* mapChecking = sMapChallengeModeStore.LookupEntry(i))
                maps.emplace_back(mapChecking->MapID);
        }

    return Trinity::Containers::SelectRandomContainerElement(maps);
}
std::vector<int32> ChallengeMode::GetBonusIdsForRewards(uint32 baseItemLevel, uint8 myticLevel)
{
    if (myticLevel < 2)
        return {};
    std::vector<std::pair<int32, uint32>> bonusDescriptionByMythicPluslevel
    {
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
        {3410,5}, // 2
    };
}

void ChallengeMode::Reward(Player* player, uint8 challengelevel)
{
    if (!GetChallengeMap(player->GetMapId()))
            return;
    //Checking Player location on what map id he doing m+
    const JournalInstanceEntry* journalEntry = sDB2Manager.GetJournalInstanceMap(player->GetMapId());
    if (!journalEntry)
        return;
    //Checking What creatures are on that map which is m+ active for reward
    auto encounters = sDB2Manager.GetJournalEncounter(journalEntry->MapID);
    if (!encounters)
        return;

    //Selecting all items available for drop for current map
    std::vector<const JournalEncounterItemEntry*>items;
    for (auto encounter : *encounters)
        if (const std::vector<const JournalEncounterItemEntry*>* journalItems = sDB2Manager.GetJournalItem(encounter->ID))
            items.insert(items.end(), journalItems->begin(), journalItems->end());
    if (items.empty())
        return;
    std::vector<const ItemTemplate*>loots;
    for (const JournalEncounterItemEntry* jourEncItEn : items)
    {
        const ItemTemplate* ITtemplate = sObjectMgr->GetItemTemplate(jourEncItEn->ItemID);
        if (!ITtemplate)
            return;
        if (ITtemplate->IsUsableByLootSpecialization(player, false))
            if (ITtemplate->GetInventoryType() != INVTYPE_NON_EQUIP)
                loots.push_back(ITtemplate);
        else continue;
    }
    
    const ItemTemplate* randomLoot = Trinity::Containers::SelectRandomContainerElement(loots);
        if(!randomLoot)
            return;
        uint32 itemId = randomLoot->GetId();
        ItemPosCountVec destination;
        InventoryResult message = player->CanStoreNewItem(NULL_BAG, NULL_SLOT, destination, itemId, 1);
        //If he can't loot item he will get this message.
        if (message != EQUIP_ERR_OK)
        {
            //sending error message
            player->SendEquipError(message, nullptr, nullptr, itemId);
            return;
        }

        //need implementation of boonus loot
        std::vector<int32> bonusListIds = GetBonusIdsForRewards(randomLoot->GetBaseItemLevel(), challengelevel);
        Item* lootItem = player->StoreNewItem(destination, itemId, true, GenerateItemRandomBonusListId(itemId), GuidSet(), ItemContext::NONE, bonusListIds, true);
        player->SendNewItem(lootItem, 1, true, false, true);

        WorldPackets::Loot::DisplayToast toast;
        toast.EntityId = itemId;
        toast.ToastType = TOAST_ITEM;
        toast.Quantity = 1;
        toast.RandomPropertiesID = lootItem->GetItemBonusListId();
        toast.ToastMethod = TOAST_METHOD_POPUP;
        toast.bonusListIDs = lootItem->m_itemData->BonusListIDs;
        player->SendDirectMessage(toast.Write());
        

}


