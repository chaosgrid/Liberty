#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213aa0);

PROC_DECLARE(0x6213d60, internal_6213d60, public_6213d60);
extern "C" NAKED register_t __cdecl internal_6213d60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213aa0
        UNREACHABLE_TRAP(0x6213d60)
    }
}
