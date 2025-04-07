#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218eb0);

PROC_DECLARE(0x6219810, internal_6219810, public_6219810);
extern "C" NAKED register_t __cdecl internal_6219810()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6218eb0
        UNREACHABLE_TRAP(0x6219810)
    }
}
