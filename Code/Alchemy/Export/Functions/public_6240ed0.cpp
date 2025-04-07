#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240690);

PROC_DECLARE(0x6240ed0, internal_6240ed0, public_6240ed0);
extern "C" NAKED register_t __cdecl internal_6240ed0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240690
        UNREACHABLE_TRAP(0x6240ed0)
    }
}
