#include "Server-PCH.h"

PROC_DECLARE(0x6d02ad0, internal_6d02ad0, public_6d02ad0);
extern "C" NAKED register_t __cdecl internal_6d02ad0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp dword ptr ds : [public_6d64610]
        UNREACHABLE_TRAP(0x6d02ad0)
    }
}
