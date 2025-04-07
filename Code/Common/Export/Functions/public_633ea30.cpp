#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_633ea30);
CLANG_FORWARD_PROC_SYMBOL(public_633f580);
CLANG_FORWARD_PROC_SYMBOL(public_633f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_633fc90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633ea58 _public_633ea58
#define public_633ea7f _public_633ea7f
#define public_633eaa1 _public_633eaa1
#define public_633eaa5 _public_633eaa5
#define public_633eac5 _public_633eac5

PROC_DECLARE(0x633ea30, internal_633ea30, public_633ea30);
extern "C" NAKED register_t __cdecl internal_633ea30()
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
        je public_633eaa1
        mov ecx, eax
        cmp eax, ecx
        jne public_633eaa1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633ea7f
        public_633ea58 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_633f9d0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_633bbf0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_633ea58
        public_633ea7f : nop
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
        public_633eaa1 : nop
        cmp eax, edi
        je public_633eac5
        public_633eaa5 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_633fc90
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_633f580
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_633eaa5
        public_633eac5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633ea30)
    }
}

#undef public_633ea58
#undef public_633ea7f
#undef public_633eaa1
#undef public_633eaa5
#undef public_633eac5
