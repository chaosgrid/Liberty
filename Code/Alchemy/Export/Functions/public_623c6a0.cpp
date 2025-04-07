#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6245b50);

PROC_DECLARE(0x623c6a0, internal_623c6a0, public_623c6a0);
extern "C" NAKED register_t __cdecl internal_623c6a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6245b50
        UNREACHABLE_TRAP(0x623c6a0)
    }
}
