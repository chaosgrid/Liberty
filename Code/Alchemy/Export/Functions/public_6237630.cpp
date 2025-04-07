#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236a30);

PROC_DECLARE(0x6237630, internal_6237630, public_6237630);
extern "C" NAKED register_t __cdecl internal_6237630()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236a30
        UNREACHABLE_TRAP(0x6237630)
    }
}
