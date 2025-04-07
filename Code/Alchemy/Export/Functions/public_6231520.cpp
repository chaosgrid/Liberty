#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231e30);

PROC_DECLARE(0x6231520, internal_6231520, public_6231520);
extern "C" NAKED register_t __cdecl internal_6231520()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6231e30
        UNREACHABLE_TRAP(0x6231520)
    }
}
