#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c010);

PROC_DECLARE(0x623d110, internal_623d110, public_623d110);
extern "C" NAKED register_t __cdecl internal_623d110()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c010
        UNREACHABLE_TRAP(0x623d110)
    }
}
