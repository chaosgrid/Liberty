#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a840);

PROC_DECLARE(0x621b260, internal_621b260, public_621b260);
extern "C" NAKED register_t __cdecl internal_621b260()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a840
        UNREACHABLE_TRAP(0x621b260)
    }
}
