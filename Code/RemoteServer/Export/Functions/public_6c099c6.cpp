#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099c6, internal_6c099c6, public_6c099c6);
extern "C" NAKED register_t __cdecl internal_6c099c6()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b008]
        UNREACHABLE_TRAP(0x6c099c6)
    }
}
