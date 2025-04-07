#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77a50);

PROC_DECLARE(0x6b77b70, internal_6b77b70, public_6b77b70);
extern "C" NAKED register_t __cdecl internal_6b77b70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6b77a50
        UNREACHABLE_TRAP(0x6b77b70)
    }
}
