#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e00);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x6211e00, internal_6211e00, public_6211e00);
extern "C" NAKED register_t __cdecl internal_6211e00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x6211e00)
    }
}
