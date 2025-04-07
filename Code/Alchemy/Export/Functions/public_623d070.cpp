#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c1c0);

PROC_DECLARE(0x623d070, internal_623d070, public_623d070);
extern "C" NAKED register_t __cdecl internal_623d070()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c1c0
        UNREACHABLE_TRAP(0x623d070)
    }
}
