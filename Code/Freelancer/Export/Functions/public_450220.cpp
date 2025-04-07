#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x450220, internal_450220, public_450220);
extern "C" NAKED register_t __cdecl internal_450220()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_4500d0
        UNREACHABLE_TRAP(0x450220)
    }
}
