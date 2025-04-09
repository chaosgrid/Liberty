#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c78a0);
CLANG_FORWARD_PROC_SYMBOL(public_51b490);

PROC_DECLARE(0x51cb90, internal_51cb90, public_51cb90);
extern "C" NAKED register_t __cdecl internal_51cb90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_51b490
        push esi
        call public_4c78a0
        add esp, 4
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x51cb90)
    }
}
