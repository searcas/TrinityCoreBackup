/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#define DATA_MAX_ENCOUNTERS 5
#include "ScriptMgr.h"
#include "InstanceScript.h"

class instance_vault_of_the_wardens : public InstanceMapScript
{
public:
    instance_vault_of_the_wardens() : InstanceMapScript("instance_vault_of_the_wardens", 1493) { }

    struct instance_vault_of_the_wardens_InstanceMapScript : public InstanceScript
    {
        instance_vault_of_the_wardens_InstanceMapScript(InstanceMap* map) : InstanceScript(map) { }

        void Initialize() override
        {
            SetBossNumber(DATA_MAX_ENCOUNTERS);
        }
    };

    InstanceScript* GetInstanceScript(InstanceMap* map) const override
    {
        return new instance_vault_of_the_wardens_InstanceMapScript(map);
    }
};
 
void AddSC_instance_vault_of_the_wardens()
{
    new instance_vault_of_the_wardens();
}
