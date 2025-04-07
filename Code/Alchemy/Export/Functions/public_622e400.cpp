#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e730);

PROC_DECLARE(0x622e400, internal_622e400, public_622e400);
extern "C" NAKED register_t __cdecl internal_622e400()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622e730
        UNREACHABLE_TRAP(0x622e400)
    }
}
