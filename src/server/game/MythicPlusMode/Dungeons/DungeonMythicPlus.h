#pragma once



#ifndef MYTHICPLUS
#define MYTHICPLUS





class TC_GAME_API ChallengeMode
{
    static ChallengeMode* instance();
    const MapChallengeModeEntry* GetChallengeMap(uint32 mapId);

    uint32 GetDamageMultiplier(uint8 mythicLevel);
    uint32 GetHealthMultiplier(uint8 mythicLevel);

    uint32 GetRandomNextMythicMap();

    std::vector<int32>GetBonusIdsForRewards(uint32 baseItemLevel, uint8 mythicLevel);

    void Reward(Player* player, uint8 challengeLevel);


};

#endif // !MYTHICPLUS
