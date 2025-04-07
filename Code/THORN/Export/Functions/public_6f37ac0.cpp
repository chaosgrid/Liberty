#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f378d0);

PROC_DECLARE(0x6f37ac0, internal_6f37ac0, public_6f37ac0);
extern "C" NAKED register_t __cdecl internal_6f37ac0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6f378d0
        UNREACHABLE_TRAP(0x6f37ac0)
    }
}
