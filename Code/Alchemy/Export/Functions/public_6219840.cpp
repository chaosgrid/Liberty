#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e30);

PROC_DECLARE(0x6219840, internal_6219840, public_6219840);
extern "C" NAKED register_t __cdecl internal_6219840()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6218e30
        UNREACHABLE_TRAP(0x6219840)
    }
}
