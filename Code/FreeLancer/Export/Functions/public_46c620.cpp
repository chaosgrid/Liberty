#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46c638 _public_46c638

PROC_DECLARE(0x46c620, internal_46c620, public_46c620);
extern "C" NAKED register_t __cdecl internal_46c620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_46c640
        test byte ptr ss : [esp+8], 1
        je public_46c638
        push esi
        call public_5b7e1d
        add esp, 4
        public_46c638 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x46c620)
    }
}

#undef public_46c638
