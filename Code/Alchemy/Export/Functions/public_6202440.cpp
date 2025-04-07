#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202440);
CLANG_FORWARD_PROC_SYMBOL(public_62273a0);

PROC_DECLARE(0x6202440, internal_6202440, public_6202440);
extern "C" NAKED register_t __cdecl internal_6202440()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_62273a0
        UNREACHABLE_TRAP(0x6202440)
    }
}
