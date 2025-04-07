#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219320);

PROC_DECLARE(0x6219870, internal_6219870, public_6219870);
extern "C" NAKED register_t __cdecl internal_6219870()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219320
        UNREACHABLE_TRAP(0x6219870)
    }
}
