#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5650c8 _public_5650c8

PROC_DECLARE(0x5650b0, internal_5650b0, public_5650b0);
extern "C" NAKED register_t __cdecl internal_5650b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_565010
        test byte ptr ss : [esp+8], 1
        je public_5650c8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5650c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5650b0)
    }
}

#undef public_5650c8
