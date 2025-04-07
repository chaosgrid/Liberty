#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a900);

PROC_DECLARE(0x622b240, internal_622b240, public_622b240);
extern "C" NAKED register_t __cdecl internal_622b240()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a900
        UNREACHABLE_TRAP(0x622b240)
    }
}
