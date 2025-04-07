#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed40);

PROC_DECLARE(0x6d1f010, internal_6d1f010, public_6d1f010);
extern "C" NAKED register_t __cdecl internal_6d1f010()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x1C
        jmp public_6d1ed40
        UNREACHABLE_TRAP(0x6d1f010)
    }
}
