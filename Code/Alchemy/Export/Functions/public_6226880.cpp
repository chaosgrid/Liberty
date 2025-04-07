#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227230);

PROC_DECLARE(0x6226880, internal_6226880, public_6226880);
extern "C" NAKED register_t __cdecl internal_6226880()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227230
        UNREACHABLE_TRAP(0x6226880)
    }
}
