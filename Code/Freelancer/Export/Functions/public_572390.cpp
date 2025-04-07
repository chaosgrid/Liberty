#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_572390);
CLANG_FORWARD_PROC_SYMBOL(public_5723b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5723a8 _public_5723a8

PROC_DECLARE(0x572390, internal_572390, public_572390);
extern "C" NAKED register_t __cdecl internal_572390()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5723b0
        test byte ptr ss : [esp+8], 1
        je public_5723a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5723a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x572390)
    }
}

#undef public_5723a8
