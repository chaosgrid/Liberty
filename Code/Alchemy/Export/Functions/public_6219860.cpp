#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219300);

PROC_DECLARE(0x6219860, internal_6219860, public_6219860);
extern "C" NAKED register_t __cdecl internal_6219860()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219300
        UNREACHABLE_TRAP(0x6219860)
    }
}
