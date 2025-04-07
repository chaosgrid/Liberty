#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71160);

PROC_DECLARE(0x6f72950, internal_6f72950, public_6f72950);
extern "C" NAKED register_t __cdecl internal_6f72950()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f71160
        UNREACHABLE_TRAP(0x6f72950)
    }
}
