#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e920);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633e941 _public_633e941
#define public_633e95e _public_633e95e

PROC_DECLARE(0x633e920, internal_633e920, public_633e920);
extern "C" NAKED register_t __cdecl internal_633e920()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC14
        mov ebx, ecx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_633e941
        mov edi, eax
        public_633e941 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_633e95e
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0x303
        rep movsd
        public_633e95e : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633e920)
    }
}

#undef public_633e941
#undef public_633e95e
