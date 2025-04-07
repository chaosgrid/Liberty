#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee30);

PROC_DECLARE(0x622e350, internal_622e350, public_622e350);
extern "C" NAKED register_t __cdecl internal_622e350()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee30
        UNREACHABLE_TRAP(0x622e350)
    }
}
