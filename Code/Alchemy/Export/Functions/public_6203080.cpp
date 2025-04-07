#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202740);

PROC_DECLARE(0x6203080, internal_6203080, public_6203080);
extern "C" NAKED register_t __cdecl internal_6203080()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202740
        UNREACHABLE_TRAP(0x6203080)
    }
}
