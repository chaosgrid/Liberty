#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214620);

PROC_DECLARE(0x6215210, internal_6215210, public_6215210);
extern "C" NAKED register_t __cdecl internal_6215210()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214620
        UNREACHABLE_TRAP(0x6215210)
    }
}
