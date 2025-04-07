#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22550);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2152e _public_6c2152e

PROC_DECLARE(0x6c21510, internal_6c21510, public_6c21510);
extern "C" NAKED register_t __cdecl internal_6c21510()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6c2152e
        test esi, esi
        je public_6c2152e
        mov ecx, esi
        call public_6c22550
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c2152e : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c21510)
    }
}

#undef public_6c2152e
