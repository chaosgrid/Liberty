#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240540);

PROC_DECLARE(0x6240ef0, internal_6240ef0, public_6240ef0);
extern "C" NAKED register_t __cdecl internal_6240ef0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240540
        UNREACHABLE_TRAP(0x6240ef0)
    }
}
