#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235860);

PROC_DECLARE(0x6235080, internal_6235080, public_6235080);
extern "C" NAKED register_t __cdecl internal_6235080()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235860
        UNREACHABLE_TRAP(0x6235080)
    }
}
