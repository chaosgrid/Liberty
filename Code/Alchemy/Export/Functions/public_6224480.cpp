#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224140);

PROC_DECLARE(0x6224480, internal_6224480, public_6224480);
extern "C" NAKED register_t __cdecl internal_6224480()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6224140
        UNREACHABLE_TRAP(0x6224480)
    }
}
