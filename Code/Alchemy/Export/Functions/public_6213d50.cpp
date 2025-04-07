#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213a90);

PROC_DECLARE(0x6213d50, internal_6213d50, public_6213d50);
extern "C" NAKED register_t __cdecl internal_6213d50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213a90
        UNREACHABLE_TRAP(0x6213d50)
    }
}
