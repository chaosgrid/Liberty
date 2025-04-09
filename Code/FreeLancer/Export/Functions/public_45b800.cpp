#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b820);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45b818 _public_45b818

PROC_DECLARE(0x45b800, internal_45b800, public_45b800);
extern "C" NAKED register_t __cdecl internal_45b800()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45b820
        test byte ptr ss : [esp+8], 1
        je public_45b818
        push esi
        call public_5b7e1d
        add esp, 4
        public_45b818 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x45b800)
    }
}

#undef public_45b818
