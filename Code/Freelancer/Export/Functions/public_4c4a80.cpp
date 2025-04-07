#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9b20);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c5f60);
CLANG_FORWARD_PROC_SYMBOL(public_4f4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_4c4aaf _public_4c4aaf
#define public_4c4ac0 _public_4c4ac0
#define public_4c4ad9 _public_4c4ad9
#define public_4c4ae5 _public_4c4ae5
#define public_4c4afe _public_4c4afe
#define public_4c4b7b _public_4c4b7b
#define public_4c4b80 _public_4c4b80
#define public_4c4ba3 _public_4c4ba3

PROC_DECLARE(0x4c4a80, internal_4c4a80, public_4c4a80);
extern "C" NAKED register_t __cdecl internal_4c4a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_673374]
        sub esp, 0xC
        test eax, eax
        mov dword ptr ds : [public_67337c], 0
        mov dword ptr ds : [public_673380], 0
        jle public_4c4aaf
        mov dword ptr ds : [public_673374], 0
        call public_4f4cd0
        public_4c4aaf : nop
        push esi
        push edi
        mov edi, dword ptr ds : [public_672970]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c4ad9
        lea ecx, ds:[ecx]
        public_4c4ac0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_67296c
        call dword ptr ds : [public_5c63ac]
        cmp esi, edi
        jne public_4c4ac0
        public_4c4ad9 : nop
        mov edi, dword ptr ds : [public_672964]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c4afe
        public_4c4ae5 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4c4ae5
        public_4c4afe : nop
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
        je public_4c4b7b
        mov edx, eax
        cmp eax, edx
        jne public_4c4b7b
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
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_673320
        call public_53e430
        jmp public_4c4ba3
        public_4c4b7b : nop
        cmp eax, ecx
        je public_4c4ba3
        nop 
        public_4c4b80 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_52afa0
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_673320
        call public_46c8c0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_4c4b80
        public_4c4ba3 : nop
        call public_4b9bb0
        push 0
        call public_4b9b20
        add esp, 4
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4c4a80)
    }
}

#undef public_4c4aaf
#undef public_4c4ac0
#undef public_4c4ad9
#undef public_4c4ae5
#undef public_4c4afe
#undef public_4c4b7b
#undef public_4c4b80
#undef public_4c4ba3
