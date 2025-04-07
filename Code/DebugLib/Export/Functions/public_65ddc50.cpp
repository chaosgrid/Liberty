#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddc50);

#define public_65ddc60 _public_65ddc60
#define public_65ddc6a _public_65ddc6a

PROC_DECLARE(0x65ddc50, internal_65ddc50, public_65ddc50);
extern "C" NAKED register_t __cdecl internal_65ddc50()
{
    __asm
    {
        cmp cl, 0x40
        jae public_65ddc6a
        cmp cl, 0x20
        jae public_65ddc60
        shld edx, eax, cl
        shl eax, cl
        ret 
        public_65ddc60 : nop
        mov edx, eax
        xor eax, eax
        and cl, 0x1F
        shl edx, cl
        ret 
        public_65ddc6a : nop
        xor eax, eax
        xor edx, edx
        ret 
        UNREACHABLE_TRAP(0x65ddc50)
    }
}

#undef public_65ddc60
#undef public_65ddc6a
