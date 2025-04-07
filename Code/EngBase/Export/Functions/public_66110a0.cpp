#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66110a0);
CLANG_FORWARD_PROC_SYMBOL(public_66139b0);
CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66110d8 _public_66110d8
#define public_6611102 _public_6611102
#define public_661112b _public_661112b
#define public_661112f _public_661112f
#define public_6611152 _public_6611152
#define public_6611157 _public_6611157

PROC_DECLARE(0x66110a0, internal_66110a0, public_66110a0);
extern "C" NAKED register_t __cdecl internal_66110a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_662acc8]
        mov edx, dword ptr ds : [public_662acd4]
        push ebx
        xor ebx, ebx
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        cmp edx, ebx
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_661112b
        mov edx, ecx
        cmp ecx, edx
        jne public_661112b
        cmp edi, eax
        jne public_661112b
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_662accc]
        cmp edi, ecx
        mov esi, edi
        je public_6611102
        public_66110d8 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, offset public_662acc4
        push eax
        call public_66139b0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_66281d0
        mov ecx, dword ptr ds : [public_662accc]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_66110d8
        mov eax, dword ptr ds : [public_662acc8]
        public_6611102 : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_662acc8]
        mov dword ptr ds : [public_662acd4], ebx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_662acc8]
        push ecx
        mov ecx, offset public_662acc4
        mov dword ptr ds : [eax+8], eax
        call public_6627050
        jmp public_6611152
        public_661112b : nop
        cmp ecx, edi
        je public_6611157
        public_661112f : nop
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_66142f0
        lea edx, ss:[esp+0x14]
        push esi
        push edx
        mov ecx, offset public_662acc4
        call public_6617c90
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        jne public_661112f
        public_6611152 : nop
        mov eax, dword ptr ds : [public_662acc8]
        public_6611157 : nop
        push eax
        call public_66281d0
        mov eax, dword ptr ds : [public_662accc]
        mov dword ptr ds : [public_662acc8], ebx
        push eax
        mov dword ptr ds : [public_662acd4], ebx
        call public_66281d0
        add esp, 8
        mov dword ptr ds : [public_662accc], ebx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x66110a0)
    }
}

#undef public_66110d8
#undef public_6611102
#undef public_661112b
#undef public_661112f
#undef public_6611152
#undef public_6611157
