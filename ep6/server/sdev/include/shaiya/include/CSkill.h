#pragma once
#include <include/shaiya/common.h>
#include <include/shaiya/include/CGameData.h>
#include <include/shaiya/include/SNode.h>

namespace shaiya
{
    #pragma pack(push, 1)
    struct CSkill
    {
        SNode node;           //0x00
        ULONG id;             //0x08
        UINT32 skillId;       //0x0C
        UINT32 skillLv;       //0x10
        UINT32 skillIndex;    //0x14
        PAD(4);
        TickCount resetTime;  //0x1C
        PAD(20);
        // 0x34
        CGameData::SkillInfo* skillInfo;
        PAD(8);
        // 0x40
    };
    #pragma pack(pop)
}
