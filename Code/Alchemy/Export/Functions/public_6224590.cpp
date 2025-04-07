#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d10);

PROC_DECLARE(0x6224590, internal_6224590, public_6224590);
extern "C" NAKED register_t __cdecl internal_6224590()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223d10
        UNREACHABLE_TRAP(0x6224590)
    }
}
