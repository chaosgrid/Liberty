#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed40);

PROC_DECLARE(0x6d1ef80, internal_6d1ef80, public_6d1ef80);
extern "C" NAKED register_t __cdecl internal_6d1ef80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x10
        jmp public_6d1ed40
        UNREACHABLE_TRAP(0x6d1ef80)
    }
}
