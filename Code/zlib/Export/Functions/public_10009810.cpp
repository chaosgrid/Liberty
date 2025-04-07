#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009810);

#define public_10009816 _public_10009816
#define public_10009821 _public_10009821

PROC_DECLARE(0x10009810, internal_10009810, public_10009810);
extern "C" NAKED register_t __cdecl internal_10009810()
{
    __asm
    {
        xor eax, eax
        test edx, edx
        jle public_10009821
        public_10009816 : nop
        mov byte ptr ds : [eax+esi], cl
        shr ecx, 8
        inc eax
        cmp eax, edx
        jl public_10009816
        public_10009821 : nop
        ret 
        UNREACHABLE_TRAP(0x10009810)
    }
}

#undef public_10009816
#undef public_10009821
