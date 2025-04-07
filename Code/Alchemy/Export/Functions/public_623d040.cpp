#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c180);

PROC_DECLARE(0x623d040, internal_623d040, public_623d040);
extern "C" NAKED register_t __cdecl internal_623d040()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c180
        UNREACHABLE_TRAP(0x623d040)
    }
}
