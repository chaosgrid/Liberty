#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62023c0);
CLANG_FORWARD_PROC_SYMBOL(public_62281c0);

PROC_DECLARE(0x62023c0, internal_62023c0, public_62023c0);
extern "C" NAKED register_t __cdecl internal_62023c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_62281c0
        UNREACHABLE_TRAP(0x62023c0)
    }
}
