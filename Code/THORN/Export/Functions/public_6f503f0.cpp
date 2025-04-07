#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4afc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ca10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);

#define public_6f5041b _public_6f5041b

PROC_DECLARE(0x6f503f0, internal_6f503f0, public_6f503f0);
extern "C" NAKED register_t __cdecl internal_6f503f0()
{
    __asm
    {
        push 0
        push 0
        push 1
        call public_6f4f630
        push eax
        call public_6f4ca10
        add esp, 0x10
        test eax, eax
        jne public_6f5041b
        call public_6f4afc0
        test eax, eax
        jne public_6f5041b
        push eax
        push eax
        call public_6f4b840
        add esp, 8
        public_6f5041b : nop
        ret 
        UNREACHABLE_TRAP(0x6f503f0)
    }
}

#undef public_6f5041b
