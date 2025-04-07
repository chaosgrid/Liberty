#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e10);

PROC_DECLARE(0x6219830, internal_6219830, public_6219830);
extern "C" NAKED register_t __cdecl internal_6219830()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6218e10
        UNREACHABLE_TRAP(0x6219830)
    }
}
