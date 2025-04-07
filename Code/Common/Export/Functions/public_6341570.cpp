#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6341570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6341588 _public_6341588

PROC_DECLARE(0x6341570, internal_6341570, public_6341570);
extern "C" NAKED register_t __cdecl internal_6341570()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_633bbf0
        test byte ptr ss : [esp+8], 1
        je public_6341588
        push esi
        call public_6391d5a
        add esp, 4
        public_6341588 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6341570)
    }
}

#undef public_6341588
