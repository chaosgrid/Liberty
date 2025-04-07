#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b990);
CLANG_FORWARD_PROC_SYMBOL(public_622e830);

PROC_DECLARE(0x622e830, internal_622e830, public_622e830);
extern "C" NAKED register_t __cdecl internal_622e830()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_622b990
        UNREACHABLE_TRAP(0x622e830)
    }
}
