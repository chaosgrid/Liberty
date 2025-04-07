#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d880);
CLANG_FORWARD_PROC_SYMBOL(public_6245aa0);

PROC_DECLARE(0x621d880, internal_621d880, public_621d880);
extern "C" NAKED register_t __cdecl internal_621d880()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245aa0
        UNREACHABLE_TRAP(0x621d880)
    }
}
