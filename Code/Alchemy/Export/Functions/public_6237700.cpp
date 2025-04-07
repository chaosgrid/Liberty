#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236d70);

PROC_DECLARE(0x6237700, internal_6237700, public_6237700);
extern "C" NAKED register_t __cdecl internal_6237700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236d70
        UNREACHABLE_TRAP(0x6237700)
    }
}
