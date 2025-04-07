#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b75dc);
CLANG_FORWARD_PROC_SYMBOL(public_5b7617);
CLANG_FORWARD_PROC_SYMBOL(public_5b7762);

#define public_5b778d _public_5b778d

PROC_DECLARE(0x5b7762, internal_5b7762, public_5b7762);
extern "C" NAKED register_t __cdecl internal_5b7762()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ss:[ebp+0xC]
        push eax
        push esi
        push edi
        call public_5b7617
        test eax, eax
        jl public_5b778d
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        sub esi, eax
        push esi
        add eax, edi
        push eax
        call public_5b75dc
        public_5b778d : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x5b7762)
    }
}

#undef public_5b778d
