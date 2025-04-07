#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62136d0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

PROC_DECLARE(0x62136d0, internal_62136d0, public_62136d0);
extern "C" NAKED register_t __cdecl internal_62136d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x62136d0)
    }
}
