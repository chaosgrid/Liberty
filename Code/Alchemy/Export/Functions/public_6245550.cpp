#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245280);

PROC_DECLARE(0x6245550, internal_6245550, public_6245550);
extern "C" NAKED register_t __cdecl internal_6245550()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245280
        UNREACHABLE_TRAP(0x6245550)
    }
}
