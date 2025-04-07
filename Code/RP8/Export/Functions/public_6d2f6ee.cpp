#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f6ee);
CLANG_FORWARD_PROC_SYMBOL(public_6d3323d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33247);
CLANG_FORWARD_PROC_SYMBOL(public_6d369f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b12);
CLANG_FORWARD_PROC_SYMBOL(public_6d36ba7);
CLANG_FORWARD_PROC_SYMBOL(public_6d36bac);

#define public_6d2f71b _public_6d2f71b
#define public_6d2f723 _public_6d2f723
#define public_6d2f72d _public_6d2f72d
#define public_6d2f73f _public_6d2f73f
#define public_6d2f7b0 _public_6d2f7b0
#define public_6d2f7b2 _public_6d2f7b2
#define public_6d2f7b3 _public_6d2f7b3

PROC_DECLARE(0x6d2f6ee, internal_6d2f6ee, public_6d2f6ee);
extern "C" NAKED register_t __cdecl internal_6d2f6ee()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x50]
        sub esp, 0xB4
        push ebx
        lea ecx, ss:[ebp+0x44]
        call public_6d3323d
        lea ecx, ss:[ebp+0x34]
        call public_6d36b12
        xor ebx, ebx
        cmp dword ptr ss : [ebp+0x58], ebx
        jne public_6d2f71b
        mov ebx, 0x8876086C
        jmp public_6d2f7b3
        public_6d2f71b : nop
        push esi
        mov esi, dword ptr ss : [ebp+0x64]
        cmp esi, ebx
        jne public_6d2f72d
        public_6d2f723 : nop
        mov ebx, 0x8876086C
        jmp public_6d2f7b2
        public_6d2f72d : nop
        cmp dword ptr ss : [ebp+0x74], ebx
        je public_6d2f723
        cmp dword ptr ss : [ebp+0x78], 0xFFFFFFFF
        jne public_6d2f73f
        mov dword ptr ss : [ebp+0x78], 0x80004
        public_6d2f73f : nop
        push ebx
        push ebx
        push dword ptr ss : [ebp+0x60]
        lea eax, ss:[ebp-0x64]
        push dword ptr ss : [ebp+0x5C]
        lea ecx, ss:[ebp+0x34]
        push dword ptr ss : [ebp+0x58]
        push eax
        call public_6d36bac
        cmp eax, ebx
        jl public_6d2f7b0
        mov eax, dword ptr ss : [ebp+0x68]
        push edi
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [ebp-0x18], esi
        mov esi, dword ptr ss : [ebp+0x74]
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ss : [ebp-0xC], ebx
        lea edi, ss:[ebp-8]
        movsd 
        movsd 
        movsd 
        movsd 
        push 6
        pop ecx
        push dword ptr ss : [ebp+0x78]
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], 1
        lea esi, ss:[ebp-8]
        lea edi, ss:[ebp+0x10]
        rep movsd
        mov dword ptr ss : [ebp+0x2C], eax
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ss : [ebp+0x30], eax
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-0x64]
        push eax
        lea ecx, ss:[ebp+0x44]
        call public_6d369f8
        cmp eax, ebx
        pop edi
        jge public_6d2f7b2
        public_6d2f7b0 : nop
        mov ebx, eax
        public_6d2f7b2 : nop
        pop esi
        public_6d2f7b3 : nop
        lea ecx, ss:[ebp+0x34]
        call public_6d36ba7
        lea ecx, ss:[ebp+0x44]
        call public_6d33247
        mov eax, ebx
        pop ebx
        add ebp, 0x50
        leave 
        ret 0x28
        UNREACHABLE_TRAP(0x6d2f6ee)
    }
}

#undef public_6d2f71b
#undef public_6d2f723
#undef public_6d2f72d
#undef public_6d2f73f
#undef public_6d2f7b0
#undef public_6d2f7b2
#undef public_6d2f7b3
