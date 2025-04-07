#include "Alchemy-PCH.h"


#define public_6220e4a _public_6220e4a

PROC_DECLARE(0x6220e40, internal_6220e40, public_6220e40);
extern "C" NAKED register_t __cdecl internal_6220e40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        jne public_6220e4a
        xor eax, eax
        ret 
        public_6220e4a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6220e40)
    }
}

#undef public_6220e4a
