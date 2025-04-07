#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x620dfd0, internal_620dfd0, public_620dfd0);
extern "C" NAKED register_t __cdecl internal_620dfd0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x620dfd0)
    }
}
