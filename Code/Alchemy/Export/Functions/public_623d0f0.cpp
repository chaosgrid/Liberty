#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c100);

PROC_DECLARE(0x623d0f0, internal_623d0f0, public_623d0f0);
extern "C" NAKED register_t __cdecl internal_623d0f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c100
        UNREACHABLE_TRAP(0x623d0f0)
    }
}
