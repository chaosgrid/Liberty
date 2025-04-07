#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240630);

PROC_DECLARE(0x6240e50, internal_6240e50, public_6240e50);
extern "C" NAKED register_t __cdecl internal_6240e50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240630
        UNREACHABLE_TRAP(0x6240e50)
    }
}
