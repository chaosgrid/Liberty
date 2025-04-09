#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_55a658 _public_55a658

PROC_DECLARE(0x55a640, internal_55a640, public_55a640);
extern "C" NAKED register_t __cdecl internal_55a640()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_55d610
        test byte ptr ss : [esp+8], 1
        je public_55a658
        push esi
        call public_5b7e1d
        add esp, 4
        public_55a658 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55a640)
    }
}

#undef public_55a658
