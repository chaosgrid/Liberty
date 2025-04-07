#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213890);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x6213890, internal_6213890, public_6213890);
extern "C" NAKED register_t __cdecl internal_6213890()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x6213890)
    }
}
