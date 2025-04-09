#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x450240, internal_450240, public_450240);
extern "C" NAKED register_t __cdecl internal_450240()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_450190
        UNREACHABLE_TRAP(0x450240)
    }
}
