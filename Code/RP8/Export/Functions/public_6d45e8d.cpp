#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4440b);
CLANG_FORWARD_PROC_SYMBOL(public_6d458e1);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e8d);

#define public_6d45ebf _public_6d45ebf

PROC_DECLARE(0x6d45e8d, internal_6d45e8d, public_6d45e8d);
extern "C" NAKED register_t __cdecl internal_6d45e8d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x100
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp-0x100]
        call public_6d4440b
        test eax, eax
        jl public_6d45ebf
        lea eax, ss:[ebp-0x100]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d458e1
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d45ebf
        xor eax, eax
        public_6d45ebf : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d45e8d)
    }
}

#undef public_6d45ebf
