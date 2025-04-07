#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099f0, internal_6c099f0, public_6c099f0);
extern "C" NAKED register_t __cdecl internal_6c099f0()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0a8]
        UNREACHABLE_TRAP(0x6c099f0)
    }
}
