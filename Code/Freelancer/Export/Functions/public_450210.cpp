#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x450210, internal_450210, public_450210);
extern "C" NAKED register_t __cdecl internal_450210()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_450190
        UNREACHABLE_TRAP(0x450210)
    }
}
