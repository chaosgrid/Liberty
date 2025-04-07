#include "Common-PCH.h"

PROC_DECLARE(0x62dae10, internal_62dae10, public_62dae10);
extern "C" NAKED register_t __cdecl internal_62dae10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        cmp edx, 2
        setne al
        ret 
        UNREACHABLE_TRAP(0x62dae10)
    }
}
