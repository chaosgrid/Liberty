#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227320);

PROC_DECLARE(0x6226800, internal_6226800, public_6226800);
extern "C" NAKED register_t __cdecl internal_6226800()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227320
        UNREACHABLE_TRAP(0x6226800)
    }
}
