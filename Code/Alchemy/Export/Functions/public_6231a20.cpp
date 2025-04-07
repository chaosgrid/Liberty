#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231a20);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x6231a20, internal_6231a20, public_6231a20);
extern "C" NAKED register_t __cdecl internal_6231a20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x6231a20)
    }
}
