#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c660);

PROC_DECLARE(0x623d220, internal_623d220, public_623d220);
extern "C" NAKED register_t __cdecl internal_623d220()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c660
        UNREACHABLE_TRAP(0x623d220)
    }
}
