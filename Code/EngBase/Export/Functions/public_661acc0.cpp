#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a9a0);

PROC_DECLARE(0x661acc0, internal_661acc0, public_661acc0);
extern "C" NAKED register_t __cdecl internal_661acc0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_661a9a0
        UNREACHABLE_TRAP(0x661acc0)
    }
}
