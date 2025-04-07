#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3323d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33247);
CLANG_FORWARD_PROC_SYMBOL(public_6d369f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b8b);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fbf);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fc4);

#define public_6d2f8c2 _public_6d2f8c2
#define public_6d2f8cc _public_6d2f8cc
#define public_6d2f8e6 _public_6d2f8e6
#define public_6d2f903 _public_6d2f903
#define public_6d2f907 _public_6d2f907
#define public_6d2f959 _public_6d2f959

PROC_DECLARE(0x6d2f8a0, internal_6d2f8a0, public_6d2f8a0);
extern "C" NAKED register_t __cdecl internal_6d2f8a0()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x4C]
        sub esp, 0xA8
        push esi
        lea ecx, ss:[ebp+0x3C]
        call public_6d3323d
        lea ecx, ss:[ebp+0x48]
        call public_6d36b8b
        cmp dword ptr ss : [ebp+0x54], 0
        jne public_6d2f8cc
        public_6d2f8c2 : nop
        mov esi, 0x8876086C
        jmp public_6d2f959
        public_6d2f8cc : nop
        mov esi, dword ptr ss : [ebp+0x60]
        test esi, esi
        je public_6d2f8c2
        cmp dword ptr ss : [ebp+0x74], 0
        je public_6d2f8c2
        cmp dword ptr ss : [ebp+0x78], 0xFFFFFFFF
        jne public_6d2f8e6
        mov dword ptr ss : [ebp+0x78], 0x80004
        public_6d2f8e6 : nop
        push 0
        push 0
        push dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp-0x5C]
        push dword ptr ss : [ebp+0x58]
        lea ecx, ss:[ebp+0x48]
        push dword ptr ss : [ebp+0x54]
        push eax
        call public_6d36fc4
        test eax, eax
        jge public_6d2f907
        public_6d2f903 : nop
        mov esi, eax
        jmp public_6d2f959
        public_6d2f907 : nop
        mov eax, dword ptr ss : [ebp+0x64]
        push edi
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x68]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        push 6
        pop ecx
        mov dword ptr ss : [ebp-0x10], esi
        mov esi, dword ptr ss : [ebp+0x74]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+0x7C]
        push 6
        lea edi, ss:[ebp]
        rep movsd
        mov esi, dword ptr ss : [ebp+0x74]
        pop ecx
        push dword ptr ss : [ebp+0x78]
        lea edi, ss:[ebp+0x18]
        rep movsd
        mov dword ptr ss : [ebp+0x34], eax
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ss : [ebp+0x38], eax
        lea eax, ss:[ebp-0x10]
        push eax
        lea eax, ss:[ebp-0x5C]
        push eax
        lea ecx, ss:[ebp+0x3C]
        call public_6d369f8
        test eax, eax
        pop edi
        jl public_6d2f903
        xor esi, esi
        public_6d2f959 : nop
        lea ecx, ss:[ebp+0x48]
        call public_6d36fbf
        lea ecx, ss:[ebp+0x3C]
        call public_6d33247
        mov eax, esi
        pop esi
        add ebp, 0x4C
        leave 
        ret 0x2C
        UNREACHABLE_TRAP(0x6d2f8a0)
    }
}

#undef public_6d2f8c2
#undef public_6d2f8cc
#undef public_6d2f8e6
#undef public_6d2f903
#undef public_6d2f907
#undef public_6d2f959
