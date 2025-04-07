#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_633f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633f9e2 _public_633f9e2
#define public_633fa09 _public_633fa09

PROC_DECLARE(0x633f9d0, internal_633f9d0, public_633f9d0);
extern "C" NAKED register_t __cdecl internal_633f9d0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_633fa09
        public_633f9e2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_633f9d0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_633bbf0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_633f9e2
        public_633fa09 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x633f9d0)
    }
}

#undef public_633f9e2
#undef public_633fa09
