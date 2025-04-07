#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450200, internal_450200, public_450200);
extern "C" NAKED register_t __cdecl internal_450200()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_450180
        UNREACHABLE_TRAP(0x450200)
    }
}
