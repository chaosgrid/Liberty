#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6228b90);
CLANG_FORWARD_PROC_SYMBOL(public_622a8f0);

PROC_DECLARE(0x622a8f0, internal_622a8f0, public_622a8f0);
extern "C" NAKED register_t __cdecl internal_622a8f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6228b90
        UNREACHABLE_TRAP(0x622a8f0)
    }
}
