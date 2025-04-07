#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211fd0);

PROC_DECLARE(0x6211a20, internal_6211a20, public_6211a20);
extern "C" NAKED register_t __cdecl internal_6211a20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6211fd0
        UNREACHABLE_TRAP(0x6211a20)
    }
}
