#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204cb0);
CLANG_FORWARD_PROC_SYMBOL(public_620dcc0);

PROC_DECLARE(0x620dcc0, internal_620dcc0, public_620dcc0);
extern "C" NAKED register_t __cdecl internal_620dcc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6204cb0
        UNREACHABLE_TRAP(0x620dcc0)
    }
}
