#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_472520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_472518 _public_472518

PROC_DECLARE(0x472500, internal_472500, public_472500);
extern "C" NAKED register_t __cdecl internal_472500()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_472520
        test byte ptr ss : [esp+8], 1
        je public_472518
        push esi
        call public_5b7e1d
        add esp, 4
        public_472518 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x472500)
    }
}

#undef public_472518
