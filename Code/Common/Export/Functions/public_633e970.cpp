#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_633e970);
CLANG_FORWARD_PROC_SYMBOL(public_633f580);
CLANG_FORWARD_PROC_SYMBOL(public_633f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_633fc90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633e9a0 _public_633e9a0
#define public_633e9c7 _public_633e9c7
#define public_633e9f3 _public_633e9f3
#define public_633e9f7 _public_633e9f7
#define public_633ea17 _public_633ea17

PROC_DECLARE(0x633e970, internal_633e970, public_633e970);
extern "C" NAKED register_t __cdecl internal_633e970()
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
        je public_633e9f3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_633e9f3
        cmp ebx, eax
        jne public_633e9f3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633e9c7
        lea esp, ss:[esp]
        public_633e9a0 : nop
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
        jne public_633e9a0
        public_633e9c7 : nop
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
        public_633e9f3 : nop
        cmp ecx, ebx
        je public_633ea17
        public_633e9f7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_633fc90
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_633f580
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_633e9f7
        public_633ea17 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633e970)
    }
}

#undef public_633e9a0
#undef public_633e9c7
#undef public_633e9f3
#undef public_633e9f7
#undef public_633ea17
