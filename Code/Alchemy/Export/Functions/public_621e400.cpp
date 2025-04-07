#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d890);

PROC_DECLARE(0x621e400, internal_621e400, public_621e400);
extern "C" NAKED register_t __cdecl internal_621e400()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621d890
        UNREACHABLE_TRAP(0x621e400)
    }
}
