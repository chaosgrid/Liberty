#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202750);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x6202750, internal_6202750, public_6202750);
extern "C" NAKED register_t __cdecl internal_6202750()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x6202750)
    }
}
