#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235a00);

PROC_DECLARE(0x62350c0, internal_62350c0, public_62350c0);
extern "C" NAKED register_t __cdecl internal_62350c0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235a00
        UNREACHABLE_TRAP(0x62350c0)
    }
}
