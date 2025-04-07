#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eab0);

PROC_DECLARE(0x622e210, internal_622e210, public_622e210);
extern "C" NAKED register_t __cdecl internal_622e210()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622eab0
        UNREACHABLE_TRAP(0x622e210)
    }
}
