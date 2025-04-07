#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a990);

PROC_DECLARE(0x661ac80, internal_661ac80, public_661ac80);
extern "C" NAKED register_t __cdecl internal_661ac80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_661a990
        UNREACHABLE_TRAP(0x661ac80)
    }
}
