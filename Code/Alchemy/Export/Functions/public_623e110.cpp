#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e110);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x623e110, internal_623e110, public_623e110);
extern "C" NAKED register_t __cdecl internal_623e110()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x623e110)
    }
}
