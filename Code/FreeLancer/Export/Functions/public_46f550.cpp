#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_46fa80);
CLANG_FORWARD_PROC_SYMBOL(public_470040);
CLANG_FORWARD_PROC_SYMBOL(public_4a2aa0);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_46f58d _public_46f58d
#define public_46f5a0 _public_46f5a0
#define public_46f5b2 _public_46f5b2
#define public_46f5d7 _public_46f5d7
#define public_46f5f4 _public_46f5f4
#define public_46f5fc _public_46f5fc
#define public_46f603 _public_46f603
#define public_46f60a _public_46f60a
#define public_46f617 _public_46f617
#define public_46f628 _public_46f628
#define public_46f637 _public_46f637
#define public_46f646 _public_46f646
#define public_46f650 _public_46f650
#define public_46f673 _public_46f673
#define public_46f690 _public_46f690
#define public_46f6a2 _public_46f6a2

PROC_DECLARE(0x46f550, internal_46f550, public_46f550);
extern "C" NAKED register_t __cdecl internal_46f550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        je public_46f58d
        cmp eax, 0x3E
        jne public_46f603
        cmp ecx, dword ptr ds : [esi+0x348]
        jne public_46f58d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov dword ptr ds : [esi+0x350], eax
        call public_46fa80
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_46f58d : nop
        cmp ecx, dword ptr ds : [esi+0x334]
        jne public_46f5d7
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_46f5b2
        lea esp, ss:[esp]
        public_46f5a0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_46f5a0
        public_46f5b2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        push 0
        push 0x66
        call public_5763b0
        add esp, 8
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_46f5d7 : nop
        cmp ecx, dword ptr ds : [esi+0x338]
        jne public_46f60a
        cmp dword ptr ds : [esi+0x34C], 1
        je public_46f5fc
        mov dword ptr ds : [esi+0x34C], 1
        push 1
        public_46f5f4 : nop
        call public_470040
        add esp, 4
        public_46f5fc : nop
        mov ecx, esi
        call public_46fa80
        public_46f603 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_46f60a : nop
        cmp ecx, dword ptr ds : [esi+0x33C]
        jne public_46f628
        mov eax, 2
        public_46f617 : nop
        cmp dword ptr ds : [esi+0x34C], eax
        je public_46f5fc
        mov dword ptr ds : [esi+0x34C], eax
        push eax
        jmp public_46f5f4
        public_46f628 : nop
        cmp ecx, dword ptr ds : [esi+0x340]
        jne public_46f637
        mov eax, 3
        jmp public_46f617
        public_46f637 : nop
        cmp ecx, dword ptr ds : [esi+0x344]
        jne public_46f646
        mov eax, 4
        jmp public_46f617
        public_46f646 : nop
        xor edx, edx
        lea eax, ds:[esi+0x354]
        mov edi, edi
        public_46f650 : nop
        cmp ecx, dword ptr ds : [eax+8]
        je public_46f673
        cmp ecx, dword ptr ds : [eax]
        je public_46f673
        cmp ecx, dword ptr ds : [eax+0xC]
        je public_46f673
        cmp ecx, dword ptr ds : [eax+4]
        je public_46f673
        inc edx
        add eax, 0x10
        cmp edx, 0xD
        jl public_46f650
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_46f673 : nop
        mov eax, dword ptr ds : [esi+0x350]
        add eax, edx
        mov edx, dword ptr ds : [public_66dac0]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push ebx
        mov ebx, dword ptr ds : [edx+ecx*4]
        je public_46f6a2
        nop 
        public_46f690 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_46f690
        public_46f6a2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        push 0
        push ebx
        call public_4a2aa0
        add esp, 8
        pop ebx
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x46f550)
    }
}

#undef public_46f58d
#undef public_46f5a0
#undef public_46f5b2
#undef public_46f5d7
#undef public_46f5f4
#undef public_46f5fc
#undef public_46f603
#undef public_46f60a
#undef public_46f617
#undef public_46f628
#undef public_46f637
#undef public_46f646
#undef public_46f650
#undef public_46f673
#undef public_46f690
#undef public_46f6a2
