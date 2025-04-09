#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538560);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5386a8 _public_5386a8

PROC_DECLARE(0x538690, internal_538690, public_538690);
extern "C" NAKED register_t __cdecl internal_538690()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_538560
        test byte ptr ss : [esp+8], 1
        je public_5386a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5386a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x538690)
    }
}

#undef public_5386a8
