#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6222c30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6222c48 _public_6222c48

PROC_DECLARE(0x6222c30, internal_6222c30, public_6222c30);
extern "C" NAKED register_t __cdecl internal_6222c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_621ff70
        test byte ptr ss : [esp+8], 1
        je public_6222c48
        push esi
        call public_62460e0
        add esp, 4
        public_6222c48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6222c30)
    }
}

#undef public_6222c48
