#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7c60);

#define public_4c7c79 _public_4c7c79

PROC_DECLARE(0x4c7c60, internal_4c7c60, public_4c7c60);
extern "C" NAKED register_t __cdecl internal_4c7c60()
{
    __asm
    {
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c7c79
        mov eax, 1
        ret 
        public_4c7c79 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4c7c60)
    }
}

#undef public_4c7c79
