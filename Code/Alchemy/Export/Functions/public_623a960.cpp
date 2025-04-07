#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237cd0);
CLANG_FORWARD_PROC_SYMBOL(public_623a960);

PROC_DECLARE(0x623a960, internal_623a960, public_623a960);
extern "C" NAKED register_t __cdecl internal_623a960()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_6237cd0
        UNREACHABLE_TRAP(0x623a960)
    }
}
