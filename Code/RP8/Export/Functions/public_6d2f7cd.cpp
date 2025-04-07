#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f7cd);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c59);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d30ce7);
CLANG_FORWARD_PROC_SYMBOL(public_6d32d6f);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b12);
CLANG_FORWARD_PROC_SYMBOL(public_6d36ba7);
CLANG_FORWARD_PROC_SYMBOL(public_6d36bac);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5cf7e);

#define public_6d2f7fd _public_6d2f7fd
#define public_6d2f804 _public_6d2f804
#define public_6d2f828 _public_6d2f828
#define public_6d2f82c _public_6d2f82c
#define public_6d2f856 _public_6d2f856

PROC_DECLARE(0x6d2f7cd, internal_6d2f7cd, public_6d2f7cd);
extern "C" NAKED register_t __cdecl internal_6d2f7cd()
{
    __asm
    {
        mov eax, public_6d5cf7e
        call public_6d5cd8c
        sub esp, 0xB0
        push ebx
        push esi
        lea ecx, ss:[ebp-0x70]
        call public_6d30c59
        xor ebx, ebx
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-4], ebx
        call public_6d36b12
        cmp dword ptr ss : [ebp+8], ebx
        mov byte ptr ss : [ebp-4], 1
        jne public_6d2f804
        public_6d2f7fd : nop
        mov esi, 0x8876086C
        jmp public_6d2f856
        public_6d2f804 : nop
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_6d2f7fd
        push 1
        push ebx
        push dword ptr ss : [ebp+0x18]
        lea eax, ss:[ebp-0xBC]
        push dword ptr ss : [ebp+0x14]
        lea ecx, ss:[ebp-0x1C]
        push dword ptr ss : [ebp+0x10]
        push eax
        call public_6d36bac
        cmp eax, ebx
        jge public_6d2f82c
        public_6d2f828 : nop
        mov esi, eax
        jmp public_6d2f856
        public_6d2f82c : nop
        lea eax, ss:[ebp-0xBC]
        push eax
        lea ecx, ss:[ebp-0x70]
        call public_6d30ce7
        cmp eax, ebx
        jl public_6d2f828
        push dword ptr ss : [ebp+0x1C]
        lea ecx, ss:[ebp-0x70]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d32d6f
        cmp eax, ebx
        jl public_6d2f828
        xor esi, esi
        public_6d2f856 : nop
        lea ecx, ss:[ebp-0x1C]
        mov byte ptr ss : [ebp-4], bl
        call public_6d36ba7
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        lea ecx, ss:[ebp-0x70]
        call public_6d30c72
        mov ecx, dword ptr ss : [ebp-0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d2f7cd)
    }
}

#undef public_6d2f7fd
#undef public_6d2f804
#undef public_6d2f828
#undef public_6d2f82c
#undef public_6d2f856
