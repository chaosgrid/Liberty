#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa750);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5aa768 _public_5aa768
#define public_5aa778 _public_5aa778
#define public_5aa784 _public_5aa784
#define public_5aa786 _public_5aa786
#define public_5aa7a1 _public_5aa7a1
#define public_5aa7a6 _public_5aa7a6
#define public_5aa7b0 _public_5aa7b0
#define public_5aa7cc _public_5aa7cc
#define public_5aa7d3 _public_5aa7d3
#define public_5aa7d7 _public_5aa7d7
#define public_5aa839 _public_5aa839
#define public_5aa840 _public_5aa840
#define public_5aa84c _public_5aa84c
#define public_5aa84e _public_5aa84e
#define public_5aa869 _public_5aa869
#define public_5aa872 _public_5aa872
#define public_5aa880 _public_5aa880
#define public_5aa89c _public_5aa89c
#define public_5aa8a5 _public_5aa8a5
#define public_5aa8a9 _public_5aa8a9
#define public_5aa8e4 _public_5aa8e4

PROC_DECLARE(0x5aa750, internal_5aa750, public_5aa750);
extern "C" NAKED register_t __cdecl internal_5aa750()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_67ecd0]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        jne public_5aa768
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_5aa768 : nop
        push ebp
        lea eax, ds:[esi+0x1D4]
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [eax], bl
        xor edi, edi
        public_5aa778 : nop
        cmp edi, ebx
        jne public_5aa784
        mov edi, dword ptr ds : [esi+0x1B8]
        jmp public_5aa786
        public_5aa784 : nop
        mov edi, dword ptr ds : [edi]
        public_5aa786 : nop
        cmp edi, ebx
        je public_5aa7a6
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_5aa7a1
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5aa7a1 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_5aa778
        public_5aa7a6 : nop
        mov edi, dword ptr ds : [esi+0x1B8]
        cmp edi, ebx
        je public_5aa7d7
        public_5aa7b0 : nop
        cmp byte ptr ds : [esi+0x1C0], bl
        mov ecx, edi
        mov edi, dword ptr ds : [edi]
        je public_5aa7cc
        mov eax, dword ptr ds : [esi+0x1C4]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+0x1C4], ecx
        jmp public_5aa7d3
        public_5aa7cc : nop
        push 1
        call public_5afe80
        public_5aa7d3 : nop
        cmp edi, ebx
        jne public_5aa7b0
        public_5aa7d7 : nop
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x58]
        mov ebp, dword ptr ss : [esp+0x10]
        push 0x42700000
        push 0x40A00000
        push ebp
        call public_5a89b0
        mov cl, byte ptr ss : [ebp]
        add esp, 0xC
        cmp cl, bl
        je public_5aa8e4
        cmp dword ptr ds : [esi+0x1B8], ebx
        jne public_5aa8e4
        cmp dword ptr ds : [public_67ecd0], ebx
        jne public_5aa839
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_5aa839 : nop
        mov byte ptr ss : [ebp], bl
        xor edi, edi
        mov edi, edi
        public_5aa840 : nop
        cmp edi, ebx
        jne public_5aa84c
        mov edi, dword ptr ds : [esi+0x1B8]
        jmp public_5aa84e
        public_5aa84c : nop
        mov edi, dword ptr ds : [edi]
        public_5aa84e : nop
        cmp edi, ebx
        je public_5aa872
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_5aa869
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5aa869 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], ebx
        jmp public_5aa840
        public_5aa872 : nop
        mov edi, dword ptr ds : [esi+0x1B8]
        cmp edi, ebx
        je public_5aa8a9
        lea esp, ss:[esp]
        public_5aa880 : nop
        cmp byte ptr ds : [esi+0x1C0], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5aa89c
        mov ecx, dword ptr ds : [esi+0x1C4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x1C4], eax
        jmp public_5aa8a5
        public_5aa89c : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5aa8a5 : nop
        cmp edi, ebx
        jne public_5aa880
        public_5aa8a9 : nop
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+0x4C]
        push 0x42700000
        push 0x40A00000
        push ebp
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        jne public_5aa8e4
        mov eax, 4
        public_5aa8e4 : nop
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5aa750)
    }
}

#undef public_5aa768
#undef public_5aa778
#undef public_5aa784
#undef public_5aa786
#undef public_5aa7a1
#undef public_5aa7a6
#undef public_5aa7b0
#undef public_5aa7cc
#undef public_5aa7d3
#undef public_5aa7d7
#undef public_5aa839
#undef public_5aa840
#undef public_5aa84c
#undef public_5aa84e
#undef public_5aa869
#undef public_5aa872
#undef public_5aa880
#undef public_5aa89c
#undef public_5aa8a5
#undef public_5aa8a9
#undef public_5aa8e4
