#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212700);

PROC_DECLARE(0x6211c40, internal_6211c40, public_6211c40);
extern "C" NAKED register_t __cdecl internal_6211c40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6212700
        UNREACHABLE_TRAP(0x6211c40)
    }
}
