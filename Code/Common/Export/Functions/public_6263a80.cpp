#include "Common-PCH.h"

PROC_DECLARE(0x6263a80, internal_6263a80, public_6263a80);
extern "C" NAKED register_t __cdecl internal_6263a80()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6263a80)
    }
}
