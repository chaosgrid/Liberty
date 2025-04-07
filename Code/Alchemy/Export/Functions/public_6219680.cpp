#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218b10);

PROC_DECLARE(0x6219680, internal_6219680, public_6219680);
extern "C" NAKED register_t __cdecl internal_6219680()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218b10
        UNREACHABLE_TRAP(0x6219680)
    }
}
