#include "Common-PCH.h"


#define public_633addd _public_633addd

PROC_DECLARE(0x633add0, internal_633add0, public_633add0);
extern "C" NAKED register_t __cdecl internal_633add0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x90]
        test edx, edx
        jne public_633addd
        xor eax, eax
        ret 
        public_633addd : nop
        mov eax, dword ptr ds : [ecx+0x94]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x633add0)
    }
}

#undef public_633addd
