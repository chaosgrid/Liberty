#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f6ee);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fcbf);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c59);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d33068);

#define public_6d2fcf8 _public_6d2fcf8
#define public_6d2fcfc _public_6d2fcfc
#define public_6d2fd2e _public_6d2fd2e
#define public_6d2fd33 _public_6d2fd33
#define public_6d2fd44 _public_6d2fd44
#define public_6d2fd4b _public_6d2fd4b

PROC_DECLARE(0x6d2fcbf, internal_6d2fcbf, public_6d2fcbf);
extern "C" NAKED register_t __cdecl internal_6d2fcbf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        lea ecx, ss:[ebp-0x64]
        call public_6d30c59
        xor ebx, ebx
        cmp dword ptr ss : [ebp+8], ebx
        je public_6d2fd2e
        cmp dword ptr ss : [ebp+0x14], ebx
        je public_6d2fd2e
        cmp dword ptr ss : [ebp+0x18], ebx
        je public_6d2fd2e
        push 1
        push dword ptr ss : [ebp+0x28]
        lea ecx, ss:[ebp-0x64]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        call public_6d33068
        cmp eax, ebx
        jge public_6d2fcfc
        public_6d2fcf8 : nop
        mov esi, eax
        jmp public_6d2fd33
        public_6d2fcfc : nop
        mov esi, dword ptr ss : [ebp+0x1C]
        cmp esi, ebx
        lea edi, ss:[ebp-0x10]
        je public_6d2fd44
        movsd 
        movsd 
        movsd 
        movsd 
        cmp dword ptr ss : [ebp-0x10], ebx
        jl public_6d2fd2e
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ss : [ebp-0x58]
        jg public_6d2fd2e
        cmp dword ptr ss : [ebp-0x10], eax
        jg public_6d2fd2e
        cmp dword ptr ss : [ebp-0xC], ebx
        jl public_6d2fd2e
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x54]
        jg public_6d2fd2e
        cmp dword ptr ss : [ebp-0xC], eax
        jle public_6d2fd4b
        public_6d2fd2e : nop
        mov esi, 0x8876086C
        public_6d2fd33 : nop
        lea ecx, ss:[ebp-0x64]
        call public_6d30c72
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave 
        ret 0x24
        public_6d2fd44 : nop
        lea esi, ss:[ebp-0x4C]
        movsd 
        movsd 
        movsd 
        movsd 
        public_6d2fd4b : nop
        push dword ptr ss : [ebp+0x24]
        lea eax, ss:[ebp-0x10]
        push dword ptr ss : [ebp+0x20]
        push eax
        push dword ptr ss : [ebp-0x5C]
        push dword ptr ss : [ebp-0x34]
        push dword ptr ss : [ebp-0x64]
        push dword ptr ss : [ebp-0x60]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d2f6ee
        cmp eax, ebx
        jl public_6d2fcf8
        xor esi, esi
        jmp public_6d2fd33
        UNREACHABLE_TRAP(0x6d2fcbf)
    }
}

#undef public_6d2fcf8
#undef public_6d2fcfc
#undef public_6d2fd2e
#undef public_6d2fd33
#undef public_6d2fd44
#undef public_6d2fd4b
