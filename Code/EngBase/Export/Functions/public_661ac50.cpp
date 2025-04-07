#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a990);

PROC_DECLARE(0x661ac50, internal_661ac50, public_661ac50);
extern "C" NAKED register_t __cdecl internal_661ac50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_661a990
        UNREACHABLE_TRAP(0x661ac50)
    }
}
