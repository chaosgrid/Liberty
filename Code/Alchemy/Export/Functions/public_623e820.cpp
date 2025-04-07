#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e370);

PROC_DECLARE(0x623e820, internal_623e820, public_623e820);
extern "C" NAKED register_t __cdecl internal_623e820()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e370
        UNREACHABLE_TRAP(0x623e820)
    }
}
