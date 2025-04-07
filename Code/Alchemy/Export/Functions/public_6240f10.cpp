#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240450);

PROC_DECLARE(0x6240f10, internal_6240f10, public_6240f10);
extern "C" NAKED register_t __cdecl internal_6240f10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240450
        UNREACHABLE_TRAP(0x6240f10)
    }
}
