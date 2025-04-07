#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226cb0);

PROC_DECLARE(0x6226970, internal_6226970, public_6226970);
extern "C" NAKED register_t __cdecl internal_6226970()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6226cb0
        UNREACHABLE_TRAP(0x6226970)
    }
}
