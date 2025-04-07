#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c40);

PROC_DECLARE(0x6235160, internal_6235160, public_6235160);
extern "C" NAKED register_t __cdecl internal_6235160()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235c40
        UNREACHABLE_TRAP(0x6235160)
    }
}
