#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204af0);
CLANG_FORWARD_PROC_SYMBOL(public_620db80);

PROC_DECLARE(0x620db80, internal_620db80, public_620db80);
extern "C" NAKED register_t __cdecl internal_620db80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6204af0
        UNREACHABLE_TRAP(0x620db80)
    }
}
