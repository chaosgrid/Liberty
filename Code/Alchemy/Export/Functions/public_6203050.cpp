#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202750);

PROC_DECLARE(0x6203050, internal_6203050, public_6203050);
extern "C" NAKED register_t __cdecl internal_6203050()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202750
        UNREACHABLE_TRAP(0x6203050)
    }
}
