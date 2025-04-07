#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236b10);

PROC_DECLARE(0x6237680, internal_6237680, public_6237680);
extern "C" NAKED register_t __cdecl internal_6237680()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236b10
        UNREACHABLE_TRAP(0x6237680)
    }
}
