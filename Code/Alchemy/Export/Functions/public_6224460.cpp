#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224100);

PROC_DECLARE(0x6224460, internal_6224460, public_6224460);
extern "C" NAKED register_t __cdecl internal_6224460()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6224100
        UNREACHABLE_TRAP(0x6224460)
    }
}
