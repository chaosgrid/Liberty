#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62086e0);
CLANG_FORWARD_PROC_SYMBOL(public_620a190);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620a1a8 _public_620a1a8

PROC_DECLARE(0x620a190, internal_620a190, public_620a190);
extern "C" NAKED register_t __cdecl internal_620a190()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62086e0
        test byte ptr ss : [esp+8], 1
        je public_620a1a8
        push esi
        call public_62460e0
        add esp, 4
        public_620a1a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620a190)
    }
}

#undef public_620a1a8
