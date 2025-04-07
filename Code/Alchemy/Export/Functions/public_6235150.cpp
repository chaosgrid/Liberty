#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235db0);

PROC_DECLARE(0x6235150, internal_6235150, public_6235150);
extern "C" NAKED register_t __cdecl internal_6235150()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235db0
        UNREACHABLE_TRAP(0x6235150)
    }
}
