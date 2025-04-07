#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62145f0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x62145f0, internal_62145f0, public_62145f0);
extern "C" NAKED register_t __cdecl internal_62145f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x62145f0)
    }
}
