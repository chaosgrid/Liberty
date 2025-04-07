#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f378d0);

PROC_DECLARE(0x6f37a90, internal_6f37a90, public_6f37a90);
extern "C" NAKED register_t __cdecl internal_6f37a90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f378d0
        UNREACHABLE_TRAP(0x6f37a90)
    }
}
