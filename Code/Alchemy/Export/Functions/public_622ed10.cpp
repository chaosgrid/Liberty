#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6244690);

PROC_DECLARE(0x622ed10, internal_622ed10, public_622ed10);
extern "C" NAKED register_t __cdecl internal_622ed10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_6244690
        UNREACHABLE_TRAP(0x622ed10)
    }
}
