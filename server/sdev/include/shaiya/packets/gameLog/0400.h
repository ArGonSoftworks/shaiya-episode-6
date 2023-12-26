#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    #pragma pack(push, 1)
    // ActionType 213
    struct GameLogItemComposeIncoming
    {
        UINT16 opcode{ 0x427 };
        GameLogMain main;
        UINT64 itemUid;
        UINT32 itemId;
        ItemName itemName;
        Gems gems;
        ULONG makeTime;
        CraftName craftName;
        UINT64 oldItemUid;
        UINT32 oldItemId;
        CraftName oldCraftName;
    };

    // ActionType 215
    struct GameLogItemRemakeIncoming
    {
        UINT16 opcode{ 0x429 };
        GameLogMain main;
        UINT64 itemUid;
        UINT32 itemId;
        ItemName itemName;
        Gems gems;
        ULONG makeTime;
        CraftName craftName;
        UINT64 oldItemUid1;
        UINT64 oldItemUid2;
        UINT64 oldItemUid3;
    };
    #pragma pack(pop)
}
