#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62125c0);

PROC_DECLARE(0x6211c80, internal_6211c80, public_6211c80);
extern "C" NAKED register_t __cdecl internal_6211c80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_62125c0
        UNREACHABLE_TRAP(0x6211c80)
    }
}
