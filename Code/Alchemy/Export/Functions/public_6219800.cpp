#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218ea0);

PROC_DECLARE(0x6219800, internal_6219800, public_6219800);
extern "C" NAKED register_t __cdecl internal_6219800()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6218ea0
        UNREACHABLE_TRAP(0x6219800)
    }
}
