#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x4502b0, internal_4502b0, public_4502b0);
extern "C" NAKED register_t __cdecl internal_4502b0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x18
        jmp public_4500d0
        UNREACHABLE_TRAP(0x4502b0)
    }
}
