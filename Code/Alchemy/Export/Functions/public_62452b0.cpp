#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f960);
CLANG_FORWARD_PROC_SYMBOL(public_62452b0);

PROC_DECLARE(0x62452b0, internal_62452b0, public_62452b0);
extern "C" NAKED register_t __cdecl internal_62452b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f960
        UNREACHABLE_TRAP(0x62452b0)
    }
}
