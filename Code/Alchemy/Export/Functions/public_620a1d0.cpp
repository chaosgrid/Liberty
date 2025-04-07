#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208910);
CLANG_FORWARD_PROC_SYMBOL(public_620a1d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620a1e8 _public_620a1e8

PROC_DECLARE(0x620a1d0, internal_620a1d0, public_620a1d0);
extern "C" NAKED register_t __cdecl internal_620a1d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6208910
        test byte ptr ss : [esp+8], 1
        je public_620a1e8
        push esi
        call public_62460e0
        add esp, 4
        public_620a1e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620a1d0)
    }
}

#undef public_620a1e8
