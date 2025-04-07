#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed70);

PROC_DECLARE(0x6d1ef60, internal_6d1ef60, public_6d1ef60);
extern "C" NAKED register_t __cdecl internal_6d1ef60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6d1ed70
        UNREACHABLE_TRAP(0x6d1ef60)
    }
}
