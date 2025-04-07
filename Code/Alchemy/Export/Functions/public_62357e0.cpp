#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62357e0);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x62357e0, internal_62357e0, public_62357e0);
extern "C" NAKED register_t __cdecl internal_62357e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x62357e0)
    }
}
