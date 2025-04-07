#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226e10);

PROC_DECLARE(0x6226a10, internal_6226a10, public_6226a10);
extern "C" NAKED register_t __cdecl internal_6226a10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6226e10
        UNREACHABLE_TRAP(0x6226a10)
    }
}
