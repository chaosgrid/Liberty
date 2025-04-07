#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6245290);

PROC_DECLARE(0x6245290, internal_6245290, public_6245290);
extern "C" NAKED register_t __cdecl internal_6245290()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6245290)
    }
}
