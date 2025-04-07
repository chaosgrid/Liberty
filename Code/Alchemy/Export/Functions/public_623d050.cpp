#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c1a0);

PROC_DECLARE(0x623d050, internal_623d050, public_623d050);
extern "C" NAKED register_t __cdecl internal_623d050()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c1a0
        UNREACHABLE_TRAP(0x623d050)
    }
}
