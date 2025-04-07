#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e640);

PROC_DECLARE(0x622e500, internal_622e500, public_622e500);
extern "C" NAKED register_t __cdecl internal_622e500()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622e640
        UNREACHABLE_TRAP(0x622e500)
    }
}
