#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450230, internal_450230, public_450230);
extern "C" NAKED register_t __cdecl internal_450230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_450180
        UNREACHABLE_TRAP(0x450230)
    }
}
