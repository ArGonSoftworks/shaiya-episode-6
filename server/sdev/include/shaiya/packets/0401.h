#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    #pragma pack(push, 1)
    enum struct ZoneEnterItemDropType : UINT8
    {
        User = 1,
        Mob
    };

    struct ZoneEnterItemOutgoing
    {
        UINT16 opcode{ 0x401 };
        ULONG zoneItemId;
        ZoneEnterItemDropType dropType;
        UINT8 type;
        UINT8 typeId;
        UINT8 count;
        float x;
        float y;
        float z;
    };
    #pragma pack(pop)
}
