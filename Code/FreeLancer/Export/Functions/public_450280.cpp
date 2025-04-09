#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x450280, internal_450280, public_450280);
extern "C" NAKED register_t __cdecl internal_450280()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x14
        jmp public_4500d0
        UNREACHABLE_TRAP(0x450280)
    }
}
