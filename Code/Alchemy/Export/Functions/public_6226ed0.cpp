#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224a90);
CLANG_FORWARD_PROC_SYMBOL(public_6226ed0);

PROC_DECLARE(0x6226ed0, internal_6226ed0, public_6226ed0);
extern "C" NAKED register_t __cdecl internal_6226ed0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6224a90
        UNREACHABLE_TRAP(0x6226ed0)
    }
}
