#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71150);

PROC_DECLARE(0x6f72940, internal_6f72940, public_6f72940);
extern "C" NAKED register_t __cdecl internal_6f72940()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f71150
        UNREACHABLE_TRAP(0x6f72940)
    }
}
