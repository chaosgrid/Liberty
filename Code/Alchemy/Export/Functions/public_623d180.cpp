#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c430);

PROC_DECLARE(0x623d180, internal_623d180, public_623d180);
extern "C" NAKED register_t __cdecl internal_623d180()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c430
        UNREACHABLE_TRAP(0x623d180)
    }
}
