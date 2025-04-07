#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6231da0);

PROC_DECLARE(0x6231da0, internal_6231da0, public_6231da0);
extern "C" NAKED register_t __cdecl internal_6231da0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 0xC
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_622fcf0
        UNREACHABLE_TRAP(0x6231da0)
    }
}
