#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x450330, internal_450330, public_450330);
extern "C" NAKED register_t __cdecl internal_450330()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x20
        jmp public_450190
        UNREACHABLE_TRAP(0x450330)
    }
}
