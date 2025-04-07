#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227290);

PROC_DECLARE(0x6226810, internal_6226810, public_6226810);
extern "C" NAKED register_t __cdecl internal_6226810()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227290
        UNREACHABLE_TRAP(0x6226810)
    }
}
