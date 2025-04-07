#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235440);

PROC_DECLARE(0x6235d00, internal_6235d00, public_6235d00);
extern "C" NAKED register_t __cdecl internal_6235d00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6235440
        UNREACHABLE_TRAP(0x6235d00)
    }
}
