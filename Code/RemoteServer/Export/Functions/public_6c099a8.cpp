#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099a8, internal_6c099a8, public_6c099a8);
extern "C" NAKED register_t __cdecl internal_6c099a8()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b078]
        UNREACHABLE_TRAP(0x6c099a8)
    }
}
