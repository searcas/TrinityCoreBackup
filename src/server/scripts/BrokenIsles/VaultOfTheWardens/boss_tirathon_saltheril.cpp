#include "AreaTrigger.h"
#include "AreaTriggerAI.h"
#include "GameObject.h"
#include "InstanceScript.h"
#include "Map.h"
#include "MotionMaster.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "SpellInfo.h"
#include "SpellScript.h"
#include "TemporarySummon.h"
#include "vault_of_the_wardens.h"




enum
{
    SPELL_DARK_ENERGIES = 191999,

    SPELL_DARK_STRIKES = 191948,

    SPELL_FEL_MORTAR = 202913,

    SPELL_IMOLATION_AURA = 192502,

    SPELL_METAMORPHOSIS = 192504

};


enum 
{
    EVENT_START_TEST1 = 1,
    EVENT_START_TEST2 = 2,
    EVENT_START_TEST3 = 3,
    EVENT_START_TEST4 = 4,
    EVENT_START_TEST5 = 5,
};


class boss_tirathon_saltheril : public BossAI
{
public:
    boss_tirathon_saltheril(Creature* creature) : BossAI(creature, DATA_TIRATHON_SALTHERIL) {}

    void Reset() override
    {
        _Reset();
        events.ScheduleEvent(EVENT_START_TEST1, urand(16000, 18000));
        events.ScheduleEvent(EVENT_START_TEST2, urand(4000, 6000));
        events.ScheduleEvent(EVENT_START_TEST3, urand(10000, 12000));
        events.ScheduleEvent(EVENT_START_TEST4, 20000);
        events.ScheduleEvent(EVENT_START_TEST5, 20000);
    }
    void EnterCombat(Unit* /*who*/) override
    {
        me->setActive(true);
        DoZoneInCombat();
        me->Say("TEST", LANG_UNIVERSAL);
        events.Reset();
        events.ScheduleEvent(EVENT_START_TEST1, urand(16000, 18000));
        events.ScheduleEvent(EVENT_START_TEST2, urand(4000, 6000));
        events.ScheduleEvent(EVENT_START_TEST3, urand(10000, 12000));
        events.ScheduleEvent(EVENT_START_TEST4, 20000);
        events.ScheduleEvent(EVENT_START_TEST5, 3000);
        instance->SetBossState(DATA_OAKHEART, IN_PROGRESS);
    }

    void UpdateAI(uint32 diff) override
    {
        if (!UpdateVictim())
            return;

        events.Update(diff);

    

        while (uint32 eventId = events.ExecuteEvent())
        {
            switch (eventId)
            {
            case 1:
                me->CastSpell(me, 191823);
                events.Repeat(20000);
                break;
            case 2:
                me->CastSpell(me, 192504);
                break;
            case 3:
                me->CastSpell(me, 191823);
                events.Repeat(20000);
                break;
            case 4:
                me->CastSpell(me, 191948);
                events.Repeat(20000);
                break;
            case 5:
                me->CastSpell(me, 190830);
                events.Repeat(20000);
                break;
            
            }


        DoMeleeAttackIfReady();
    }

};
private:
};

void AddSC_boss_tirathon_saltheril()
{
    RegisterCreatureAI(boss_tirathon_saltheril);
}
