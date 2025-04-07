#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed90);

PROC_DECLARE(0x622e390, internal_622e390, public_622e390);
extern "C" NAKED register_t __cdecl internal_622e390()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ed90
        UNREACHABLE_TRAP(0x622e390)
    }
}
