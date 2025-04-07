#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

PROC_DECLARE(0x62c87b0, internal_62c87b0, public_62c87b0);
extern "C" NAKED register_t __cdecl internal_62c87b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d20f0
        or byte ptr ds : [esi+0x28], 2
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62c87b0)
    }
}
