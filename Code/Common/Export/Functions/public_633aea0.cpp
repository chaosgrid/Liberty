#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633aece _public_633aece

PROC_DECLARE(0x633aea0, internal_633aea0, public_633aea0);
extern "C" NAKED register_t __cdecl internal_633aea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_633aece
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x84], 0
        add esp, 4
        mov dword ptr ds : [esi+0x84], eax
        pop esi
        ret 4
        public_633aece : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x84], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x633aea0)
    }
}

#undef public_633aece
