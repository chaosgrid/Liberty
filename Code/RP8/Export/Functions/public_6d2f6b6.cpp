#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f6b6);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c59);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d33068);

#define public_6d2f6df _public_6d2f6df

PROC_DECLARE(0x6d2f6b6, internal_6d2f6b6, public_6d2f6b6);
extern "C" NAKED register_t __cdecl internal_6d2f6b6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        push esi
        lea ecx, ss:[ebp-0x54]
        call public_6d30c59
        xor esi, esi
        push esi
        push dword ptr ss : [ebp+0x10]
        lea ecx, ss:[ebp-0x54]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d33068
        cmp eax, esi
        jge public_6d2f6df
        mov esi, eax
        public_6d2f6df : nop
        lea ecx, ss:[ebp-0x54]
        call public_6d30c72
        mov eax, esi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d2f6b6)
    }
}

#undef public_6d2f6df
