#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44d1b8 _public_44d1b8

PROC_DECLARE(0x44d1a0, internal_44d1a0, public_44d1a0);
extern "C" NAKED register_t __cdecl internal_44d1a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_44d190
        test byte ptr ss : [esp+8], 1
        je public_44d1b8
        push esi
        call public_5b7e1d
        add esp, 4
        public_44d1b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44d1a0)
    }
}

#undef public_44d1b8
