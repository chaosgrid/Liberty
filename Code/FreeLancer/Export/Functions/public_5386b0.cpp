#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5386c8 _public_5386c8

PROC_DECLARE(0x5386b0, internal_5386b0, public_5386b0);
extern "C" NAKED register_t __cdecl internal_5386b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_538f50
        test byte ptr ss : [esp+8], 1
        je public_5386c8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5386c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5386b0)
    }
}

#undef public_5386c8
