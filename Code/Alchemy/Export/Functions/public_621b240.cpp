#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a890);

PROC_DECLARE(0x621b240, internal_621b240, public_621b240);
extern "C" NAKED register_t __cdecl internal_621b240()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a890
        UNREACHABLE_TRAP(0x621b240)
    }
}
