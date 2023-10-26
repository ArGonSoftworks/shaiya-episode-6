#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    // 0x587968 (session)
    static void* g_pClientToMgr = (void*)0x10A2540;
    // 0x58796C (dbAgent)
    static void* g_pClientToDBAgent = (void*)0x10A2628;
    // 0x587970 (userLog)
    static void* g_pClientToLog = (void*)0x10A2710;

    #pragma pack(push, 1)
    struct SConnectionTServerReconnect
    {
        static void Send(void* clientToPtr, void* buf, int len);
    };
    #pragma pack(pop)
}
