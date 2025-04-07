#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c308c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2d83e _public_6c2d83e

PROC_DECLARE(0x6c2d820, internal_6c2d820, public_6c2d820);
extern "C" NAKED register_t __cdecl internal_6c2d820()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6c2d83e
        test esi, esi
        je public_6c2d83e
        mov ecx, esi
        call public_6c308c0
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c2d83e : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c2d820)
    }
}

#undef public_6c2d83e
