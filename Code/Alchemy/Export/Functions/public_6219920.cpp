#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219640);

PROC_DECLARE(0x6219920, internal_6219920, public_6219920);
extern "C" NAKED register_t __cdecl internal_6219920()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219640
        UNREACHABLE_TRAP(0x6219920)
    }
}
