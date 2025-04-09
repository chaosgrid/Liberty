#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x4501d0, internal_4501d0, public_4501d0);
extern "C" NAKED register_t __cdecl internal_4501d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_450180
        UNREACHABLE_TRAP(0x4501d0)
    }
}
