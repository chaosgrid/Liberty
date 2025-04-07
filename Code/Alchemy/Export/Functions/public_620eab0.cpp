#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eab0);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x620eab0, internal_620eab0, public_620eab0);
extern "C" NAKED register_t __cdecl internal_620eab0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x620eab0)
    }
}
