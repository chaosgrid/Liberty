#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44dc8);
CLANG_FORWARD_PROC_SYMBOL(public_6d458c9);

#define public_6d458e0 _public_6d458e0

PROC_DECLARE(0x6d458c9, internal_6d458c9, public_6d458c9);
extern "C" NAKED register_t __cdecl internal_6d458c9()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push 1
        push dword ptr ss : [esp+8]
        call public_6d44dc8
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d458e0
        xor eax, eax
        public_6d458e0 : nop
        ret 
        UNREACHABLE_TRAP(0x6d458c9)
    }
}

#undef public_6d458e0
