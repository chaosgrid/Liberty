#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62023e0);
CLANG_FORWARD_PROC_SYMBOL(public_6227680);

PROC_DECLARE(0x62023e0, internal_62023e0, public_62023e0);
extern "C" NAKED register_t __cdecl internal_62023e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6227680
        UNREACHABLE_TRAP(0x62023e0)
    }
}
