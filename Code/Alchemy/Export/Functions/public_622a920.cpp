#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227680);
CLANG_FORWARD_PROC_SYMBOL(public_622a920);

PROC_DECLARE(0x622a920, internal_622a920, public_622a920);
extern "C" NAKED register_t __cdecl internal_622a920()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6227680
        UNREACHABLE_TRAP(0x622a920)
    }
}
