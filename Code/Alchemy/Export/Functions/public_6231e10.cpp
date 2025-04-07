#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f480);
CLANG_FORWARD_PROC_SYMBOL(public_6231e10);

PROC_DECLARE(0x6231e10, internal_6231e10, public_6231e10);
extern "C" NAKED register_t __cdecl internal_6231e10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_622f480
        UNREACHABLE_TRAP(0x6231e10)
    }
}
