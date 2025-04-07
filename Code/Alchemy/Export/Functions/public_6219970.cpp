#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219520);

PROC_DECLARE(0x6219970, internal_6219970, public_6219970);
extern "C" NAKED register_t __cdecl internal_6219970()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219520
        UNREACHABLE_TRAP(0x6219970)
    }
}
