#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c230);

PROC_DECLARE(0x6c2c600, internal_6c2c600, public_6c2c600);
extern "C" NAKED register_t __cdecl internal_6c2c600()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6c2c230
        UNREACHABLE_TRAP(0x6c2c600)
    }
}
