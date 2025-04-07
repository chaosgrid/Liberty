#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ed0);

PROC_DECLARE(0x6231500, internal_6231500, public_6231500);
extern "C" NAKED register_t __cdecl internal_6231500()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6231ed0
        UNREACHABLE_TRAP(0x6231500)
    }
}
