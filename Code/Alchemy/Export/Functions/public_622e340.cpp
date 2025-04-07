#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee20);

PROC_DECLARE(0x622e340, internal_622e340, public_622e340);
extern "C" NAKED register_t __cdecl internal_622e340()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee20
        UNREACHABLE_TRAP(0x622e340)
    }
}
