#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240680);

PROC_DECLARE(0x6240ec0, internal_6240ec0, public_6240ec0);
extern "C" NAKED register_t __cdecl internal_6240ec0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240680
        UNREACHABLE_TRAP(0x6240ec0)
    }
}
