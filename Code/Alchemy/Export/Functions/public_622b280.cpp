#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a930);

PROC_DECLARE(0x622b280, internal_622b280, public_622b280);
extern "C" NAKED register_t __cdecl internal_622b280()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a930
        UNREACHABLE_TRAP(0x622b280)
    }
}
