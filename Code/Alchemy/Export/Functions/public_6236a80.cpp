#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236360);
CLANG_FORWARD_PROC_SYMBOL(public_6236a80);

PROC_DECLARE(0x6236a80, internal_6236a80, public_6236a80);
extern "C" NAKED register_t __cdecl internal_6236a80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6236360
        UNREACHABLE_TRAP(0x6236a80)
    }
}
