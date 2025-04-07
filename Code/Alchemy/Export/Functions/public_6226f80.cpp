#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f80);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x6226f80, internal_6226f80, public_6226f80);
extern "C" NAKED register_t __cdecl internal_6226f80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x6226f80)
    }
}
