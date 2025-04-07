#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218b20);

PROC_DECLARE(0x6219690, internal_6219690, public_6219690);
extern "C" NAKED register_t __cdecl internal_6219690()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218b20
        UNREACHABLE_TRAP(0x6219690)
    }
}
