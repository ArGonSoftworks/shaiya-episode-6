#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    #pragma pack(push, 1)
    struct RevengeMarkOutgoing
    {
        UINT16 opcode{ 0x229 };
        CharId killerId;
        // range = 0:8
        UINT32 killCount;
    };
    #pragma pack(pop)
}
