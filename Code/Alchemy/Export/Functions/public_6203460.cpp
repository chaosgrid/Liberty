#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203410);

PROC_DECLARE(0x6203460, internal_6203460, public_6203460);
extern "C" NAKED register_t __cdecl internal_6203460()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6203410
        UNREACHABLE_TRAP(0x6203460)
    }
}
