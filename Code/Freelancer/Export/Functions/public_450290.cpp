#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450290, internal_450290, public_450290);
extern "C" NAKED register_t __cdecl internal_450290()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x14
        jmp public_450180
        UNREACHABLE_TRAP(0x450290)
    }
}
