#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c640);

PROC_DECLARE(0x623d210, internal_623d210, public_623d210);
extern "C" NAKED register_t __cdecl internal_623d210()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c640
        UNREACHABLE_TRAP(0x623d210)
    }
}
