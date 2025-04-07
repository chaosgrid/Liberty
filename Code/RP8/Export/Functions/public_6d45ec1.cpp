#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4440b);
CLANG_FORWARD_PROC_SYMBOL(public_6d459f5);
CLANG_FORWARD_PROC_SYMBOL(public_6d45ec1);

#define public_6d45ef3 _public_6d45ef3

PROC_DECLARE(0x6d45ec1, internal_6d45ec1, public_6d45ec1);
extern "C" NAKED register_t __cdecl internal_6d45ec1()
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
        jl public_6d45ef3
        lea eax, ss:[ebp-0x100]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d459f5
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d45ef3
        xor eax, eax
        public_6d45ef3 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d45ec1)
    }
}

#undef public_6d45ef3
