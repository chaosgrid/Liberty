#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_633edd0);
CLANG_FORWARD_PROC_SYMBOL(public_633fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6340140);
CLANG_FORWARD_PROC_SYMBOL(public_6340400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633edf8 _public_633edf8
#define public_633ee1f _public_633ee1f
#define public_633ee41 _public_633ee41
#define public_633ee45 _public_633ee45
#define public_633ee65 _public_633ee65

PROC_DECLARE(0x633edd0, internal_633edd0, public_633edd0);
extern "C" NAKED register_t __cdecl internal_633edd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_633ee41
        mov ecx, eax
        cmp eax, ecx
        jne public_633ee41
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633ee1f
        public_633edf8 : nop
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
        jne public_633edf8
        public_633ee1f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_633ee41 : nop
        cmp eax, edi
        je public_633ee65
        public_633ee45 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6340400
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_633fcf0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_633ee45
        public_633ee65 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633edd0)
    }
}

#undef public_633edf8
#undef public_633ee1f
#undef public_633ee41
#undef public_633ee45
#undef public_633ee65
