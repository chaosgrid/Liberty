#include "Common-PCH.h"


#define public_626938a _public_626938a

PROC_DECLARE(0x6269380, internal_6269380, public_6269380);
extern "C" NAKED register_t __cdecl internal_6269380()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_626938a
        xor eax, eax
        ret 
        public_626938a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x6269380)
    }
}

#undef public_626938a
