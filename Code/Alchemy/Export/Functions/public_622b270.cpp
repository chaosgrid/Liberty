#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a920);

PROC_DECLARE(0x622b270, internal_622b270, public_622b270);
extern "C" NAKED register_t __cdecl internal_622b270()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a920
        UNREACHABLE_TRAP(0x622b270)
    }
}
