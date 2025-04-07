#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347d20);
CLANG_FORWARD_PROC_SYMBOL(public_6347d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6347d6f _public_6347d6f

PROC_DECLARE(0x6347d50, internal_6347d50, public_6347d50);
extern "C" NAKED register_t __cdecl internal_6347d50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6347d20
        test esi, esi
        je public_6347d6f
        mov ecx, esi
        call public_63449d0
        push esi
        call public_6391d5a
        add esp, 4
        public_6347d6f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6347d50)
    }
}

#undef public_6347d6f
