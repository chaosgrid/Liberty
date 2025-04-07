#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eaa0);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x622eaa0, internal_622eaa0, public_622eaa0);
extern "C" NAKED register_t __cdecl internal_622eaa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x622eaa0)
    }
}
