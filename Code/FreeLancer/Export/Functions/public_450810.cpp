#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454440);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_450828 _public_450828

PROC_DECLARE(0x450810, internal_450810, public_450810);
extern "C" NAKED register_t __cdecl internal_450810()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_454440
        test byte ptr ss : [esp+8], 1
        je public_450828
        push esi
        call public_5b7e1d
        add esp, 4
        public_450828 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x450810)
    }
}

#undef public_450828
