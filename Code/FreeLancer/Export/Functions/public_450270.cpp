#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x450270, internal_450270, public_450270);
extern "C" NAKED register_t __cdecl internal_450270()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x10
        jmp public_450190
        UNREACHABLE_TRAP(0x450270)
    }
}
