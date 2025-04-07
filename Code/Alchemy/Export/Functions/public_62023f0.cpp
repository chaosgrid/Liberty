#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62023f0);
CLANG_FORWARD_PROC_SYMBOL(public_6228b00);

PROC_DECLARE(0x62023f0, internal_62023f0, public_62023f0);
extern "C" NAKED register_t __cdecl internal_62023f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6228b00
        UNREACHABLE_TRAP(0x62023f0)
    }
}
