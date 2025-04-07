#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099c0, internal_6c099c0, public_6c099c0);
extern "C" NAKED register_t __cdecl internal_6c099c0()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b088]
        UNREACHABLE_TRAP(0x6c099c0)
    }
}
