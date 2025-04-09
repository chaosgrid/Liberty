#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x450300, internal_450300, public_450300);
extern "C" NAKED register_t __cdecl internal_450300()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x1C
        jmp public_450190
        UNREACHABLE_TRAP(0x450300)
    }
}
