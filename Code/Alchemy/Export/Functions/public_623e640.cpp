#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623de80);

PROC_DECLARE(0x623e640, internal_623e640, public_623e640);
extern "C" NAKED register_t __cdecl internal_623e640()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623de80
        UNREACHABLE_TRAP(0x623e640)
    }
}
