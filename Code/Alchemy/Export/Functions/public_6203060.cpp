#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202760);

PROC_DECLARE(0x6203060, internal_6203060, public_6203060);
extern "C" NAKED register_t __cdecl internal_6203060()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202760
        UNREACHABLE_TRAP(0x6203060)
    }
}
