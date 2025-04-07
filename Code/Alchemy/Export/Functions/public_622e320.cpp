#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee00);

PROC_DECLARE(0x622e320, internal_622e320, public_622e320);
extern "C" NAKED register_t __cdecl internal_622e320()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee00
        UNREACHABLE_TRAP(0x622e320)
    }
}
