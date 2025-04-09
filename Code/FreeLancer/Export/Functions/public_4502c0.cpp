#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x4502c0, internal_4502c0, public_4502c0);
extern "C" NAKED register_t __cdecl internal_4502c0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x18
        jmp public_450180
        UNREACHABLE_TRAP(0x4502c0)
    }
}
