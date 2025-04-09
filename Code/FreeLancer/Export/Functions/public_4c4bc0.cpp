#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9b20);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4bc0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c5f60);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_4c4bd1 _public_4c4bd1
#define public_4c4bea _public_4c4bea
#define public_4c4bf6 _public_4c4bf6
#define public_4c4c0f _public_4c4c0f
#define public_4c4c7d _public_4c4c7d
#define public_4c4c81 _public_4c4c81
#define public_4c4ca4 _public_4c4ca4

PROC_DECLARE(0x4c4bc0, internal_4c4bc0, public_4c4bc0);
extern "C" NAKED register_t __cdecl internal_4c4bc0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ds : [public_672970]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c4bea
        public_4c4bd1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_67296c
        call dword ptr ds : [public_5c63ac]
        cmp esi, edi
        jne public_4c4bd1
        public_4c4bea : nop
        mov edi, dword ptr ds : [public_672964]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c4c0f
        public_4c4bf6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4c4bf6
        public_4c4c0f : nop
        mov eax, dword ptr ds : [public_672950]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_67294c
        call public_4c5a80
        mov ecx, dword ptr ds : [public_673324]
        mov edx, dword ptr ds : [public_673330]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_4c4c7d
        mov edx, eax
        cmp eax, edx
        jne public_4c4c7d
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, offset public_673320
        call public_4c5f60
        mov ecx, dword ptr ds : [public_673324]
        mov edx, dword ptr ds : [public_673328]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [public_673324]
        mov dword ptr ds : [public_673330], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_673324]
        mov dword ptr ds : [eax+8], eax
        jmp public_4c4ca4
        public_4c4c7d : nop
        cmp eax, ecx
        je public_4c4ca4
        public_4c4c81 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_52afa0
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_673320
        call public_46c8c0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_4c4c81
        public_4c4ca4 : nop
        call public_4b9bb0
        push 0
        call public_4b9b20
        add esp, 4
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c4bc0)
    }
}

#undef public_4c4bd1
#undef public_4c4bea
#undef public_4c4bf6
#undef public_4c4c0f
#undef public_4c4c7d
#undef public_4c4c81
#undef public_4c4ca4
