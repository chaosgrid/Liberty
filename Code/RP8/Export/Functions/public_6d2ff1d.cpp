#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ff1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b8b);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fbf);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fc4);

#define public_6d2ff33 _public_6d2ff33
#define public_6d2ff3a _public_6d2ff3a
#define public_6d2ff4e _public_6d2ff4e
#define public_6d2ff92 _public_6d2ff92
#define public_6d2ff94 _public_6d2ff94

PROC_DECLARE(0x6d2ff1d, internal_6d2ff1d, public_6d2ff1d);
extern "C" NAKED register_t __cdecl internal_6d2ff1d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x50
        push esi
        lea ecx, ss:[ebp-4]
        call public_6d36b8b
        xor esi, esi
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d2ff3a
        public_6d2ff33 : nop
        mov esi, 0x8876086C
        jmp public_6d2ff94
        public_6d2ff3a : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        cmp ecx, esi
        je public_6d2ff33
        xor eax, eax
        inc eax
        cmp dword ptr ss : [ebp+8], ecx
        jne public_6d2ff4e
        mov eax, 0x10001
        public_6d2ff4e : nop
        push eax
        push esi
        push dword ptr ss : [ebp+0x1C]
        lea eax, ss:[ebp-0x50]
        push dword ptr ss : [ebp+0x18]
        push ecx
        push eax
        lea ecx, ss:[ebp-4]
        call public_6d36fc4
        cmp eax, esi
        jl public_6d2ff92
        push dword ptr ss : [ebp+0x24]
        lea eax, ss:[ebp-0x28]
        push dword ptr ss : [ebp+0x20]
        push eax
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x44]
        push dword ptr ss : [ebp-0x48]
        push dword ptr ss : [ebp-0x4C]
        push dword ptr ss : [ebp-0x50]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d2f8a0
        cmp eax, esi
        jge public_6d2ff94
        public_6d2ff92 : nop
        mov esi, eax
        public_6d2ff94 : nop
        lea ecx, ss:[ebp-4]
        call public_6d36fbf
        mov eax, esi
        pop esi
        leave 
        ret 0x20
        UNREACHABLE_TRAP(0x6d2ff1d)
    }
}

#undef public_6d2ff33
#undef public_6d2ff3a
#undef public_6d2ff4e
#undef public_6d2ff92
#undef public_6d2ff94
