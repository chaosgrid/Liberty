#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4750);

PROC_DECLARE(0x6eb4780, internal_6eb4780, public_6eb4780);
extern "C" NAKED register_t __cdecl internal_6eb4780()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6eb4750
        UNREACHABLE_TRAP(0x6eb4780)
    }
}
