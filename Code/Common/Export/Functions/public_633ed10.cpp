#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_633ed10);
CLANG_FORWARD_PROC_SYMBOL(public_633fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6340140);
CLANG_FORWARD_PROC_SYMBOL(public_6340400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633ed40 _public_633ed40
#define public_633ed67 _public_633ed67
#define public_633ed93 _public_633ed93
#define public_633ed97 _public_633ed97
#define public_633edb7 _public_633edb7

PROC_DECLARE(0x633ed10, internal_633ed10, public_633ed10);
extern "C" NAKED register_t __cdecl internal_633ed10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_633ed93
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_633ed93
        cmp ebx, eax
        jne public_633ed93
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633ed67
        lea esp, ss:[esp]
        public_633ed40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6340140
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_633bbb0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_633ed40
        public_633ed67 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_633ed93 : nop
        cmp ecx, ebx
        je public_633edb7
        public_633ed97 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6340400
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_633fcf0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_633ed97
        public_633edb7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633ed10)
    }
}

#undef public_633ed40
#undef public_633ed67
#undef public_633ed93
#undef public_633ed97
#undef public_633edb7
