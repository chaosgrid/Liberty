#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ea20);

PROC_DECLARE(0x622e240, internal_622e240, public_622e240);
extern "C" NAKED register_t __cdecl internal_622e240()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ea20
        UNREACHABLE_TRAP(0x622e240)
    }
}
