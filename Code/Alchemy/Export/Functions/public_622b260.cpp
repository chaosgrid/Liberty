#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a910);

PROC_DECLARE(0x622b260, internal_622b260, public_622b260);
extern "C" NAKED register_t __cdecl internal_622b260()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a910
        UNREACHABLE_TRAP(0x622b260)
    }
}
