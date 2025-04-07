#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62234e0);
CLANG_FORWARD_PROC_SYMBOL(public_6223e50);

PROC_DECLARE(0x6223e50, internal_6223e50, public_6223e50);
extern "C" NAKED register_t __cdecl internal_6223e50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_62234e0
        UNREACHABLE_TRAP(0x6223e50)
    }
}
