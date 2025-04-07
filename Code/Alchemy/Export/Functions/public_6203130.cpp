#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202440);

PROC_DECLARE(0x6203130, internal_6203130, public_6203130);
extern "C" NAKED register_t __cdecl internal_6203130()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202440
        UNREACHABLE_TRAP(0x6203130)
    }
}
