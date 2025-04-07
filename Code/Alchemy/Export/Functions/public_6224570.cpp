#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d60);

PROC_DECLARE(0x6224570, internal_6224570, public_6224570);
extern "C" NAKED register_t __cdecl internal_6224570()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223d60
        UNREACHABLE_TRAP(0x6224570)
    }
}
