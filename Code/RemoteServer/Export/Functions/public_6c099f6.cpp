#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099f6, internal_6c099f6, public_6c099f6);
extern "C" NAKED register_t __cdecl internal_6c099f6()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0ac]
        UNREACHABLE_TRAP(0x6c099f6)
    }
}
