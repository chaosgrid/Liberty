#include "Server-PCH.h"

PROC_DECLARE(0x6d02a60, internal_6d02a60, public_6d02a60);
extern "C" NAKED register_t __cdecl internal_6d02a60()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp dword ptr ds : [public_6d645fc]
        UNREACHABLE_TRAP(0x6d02a60)
    }
}
