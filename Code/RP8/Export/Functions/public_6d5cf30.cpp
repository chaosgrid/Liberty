#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cf30);

#define public_6d5cf40 _public_6d5cf40
#define public_6d5cf4a _public_6d5cf4a

PROC_DECLARE(0x6d5cf30, internal_6d5cf30, public_6d5cf30);
extern "C" NAKED register_t __cdecl internal_6d5cf30()
{
    __asm
    {
        cmp cl, 0x40
        jae public_6d5cf4a
        cmp cl, 0x20
        jae public_6d5cf40
        shrd eax, edx, cl
        shr edx, cl
        ret 
        public_6d5cf40 : nop
        mov eax, edx
        xor edx, edx
        and cl, 0x1F
        shr eax, cl
        ret 
        public_6d5cf4a : nop
        xor eax, eax
        xor edx, edx
        ret 
        UNREACHABLE_TRAP(0x6d5cf30)
    }
}

#undef public_6d5cf40
#undef public_6d5cf4a
