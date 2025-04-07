#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202770);

PROC_DECLARE(0x6203070, internal_6203070, public_6203070);
extern "C" NAKED register_t __cdecl internal_6203070()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202770
        UNREACHABLE_TRAP(0x6203070)
    }
}
