#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62141c0);
CLANG_FORWARD_PROC_SYMBOL(public_6214870);

PROC_DECLARE(0x6214870, internal_6214870, public_6214870);
extern "C" NAKED register_t __cdecl internal_6214870()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_62141c0
        UNREACHABLE_TRAP(0x6214870)
    }
}
