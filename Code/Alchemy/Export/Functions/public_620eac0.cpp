#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eac0);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x620eac0, internal_620eac0, public_620eac0);
extern "C" NAKED register_t __cdecl internal_620eac0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x620eac0)
    }
}
