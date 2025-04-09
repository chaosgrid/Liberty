#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7700);

PROC_DECLARE(0x5b7700, internal_5b7700, public_5b7700);
extern "C" NAKED register_t __cdecl internal_5b7700()
{
    __asm
    {
        push 0xFFFFFFFF
        push dword ptr ss : [esp+0xC]
        push 0xFFFFFFFF
        push dword ptr ss : [esp+0x10]
        push 1
        push 0x409
        call dword ptr ds : [public_5c6f50]
        dec eax
        dec eax
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x5b7700)
    }
}
