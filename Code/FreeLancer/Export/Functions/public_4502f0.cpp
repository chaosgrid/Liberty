#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x4502f0, internal_4502f0, public_4502f0);
extern "C" NAKED register_t __cdecl internal_4502f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x1C
        jmp public_450180
        UNREACHABLE_TRAP(0x4502f0)
    }
}
