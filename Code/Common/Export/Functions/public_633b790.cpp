#include "Common-PCH.h"


#define public_633b79a _public_633b79a

PROC_DECLARE(0x633b790, internal_633b790, public_633b790);
extern "C" NAKED register_t __cdecl internal_633b790()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x58]
        test edx, edx
        jne public_633b79a
        xor eax, eax
        ret 
        public_633b79a : nop
        mov eax, dword ptr ds : [ecx+0x5C]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x633b790)
    }
}

#undef public_633b79a
