#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c20);

PROC_DECLARE(0x6235140, internal_6235140, public_6235140);
extern "C" NAKED register_t __cdecl internal_6235140()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235c20
        UNREACHABLE_TRAP(0x6235140)
    }
}
