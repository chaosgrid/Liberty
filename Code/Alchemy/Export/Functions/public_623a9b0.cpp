#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb20);

PROC_DECLARE(0x623a9b0, internal_623a9b0, public_623a9b0);
extern "C" NAKED register_t __cdecl internal_623a9b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb20
        UNREACHABLE_TRAP(0x623a9b0)
    }
}
