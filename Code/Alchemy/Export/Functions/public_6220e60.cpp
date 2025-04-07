#include "Alchemy-PCH.h"


#define public_6220e6a _public_6220e6a

PROC_DECLARE(0x6220e60, internal_6220e60, public_6220e60);
extern "C" NAKED register_t __cdecl internal_6220e60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x28]
        test edx, edx
        jne public_6220e6a
        xor eax, eax
        ret 
        public_6220e6a : nop
        mov eax, dword ptr ds : [ecx+0x2C]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6220e60)
    }
}

#undef public_6220e6a
