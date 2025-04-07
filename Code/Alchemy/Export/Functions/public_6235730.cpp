#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232a00);
CLANG_FORWARD_PROC_SYMBOL(public_6235730);

PROC_DECLARE(0x6235730, internal_6235730, public_6235730);
extern "C" NAKED register_t __cdecl internal_6235730()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6232a00
        UNREACHABLE_TRAP(0x6235730)
    }
}
