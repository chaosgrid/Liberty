#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77b20);

PROC_DECLARE(0x6b77b90, internal_6b77b90, public_6b77b90);
extern "C" NAKED register_t __cdecl internal_6b77b90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6b77b20
        UNREACHABLE_TRAP(0x6b77b90)
    }
}
