#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c230);

PROC_DECLARE(0x621cb60, internal_621cb60, public_621cb60);
extern "C" NAKED register_t __cdecl internal_621cb60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c230
        UNREACHABLE_TRAP(0x621cb60)
    }
}
