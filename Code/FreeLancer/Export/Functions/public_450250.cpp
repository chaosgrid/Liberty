#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x450250, internal_450250, public_450250);
extern "C" NAKED register_t __cdecl internal_450250()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x10
        jmp public_4500d0
        UNREACHABLE_TRAP(0x450250)
    }
}
