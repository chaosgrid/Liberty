#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716277);

PROC_DECLARE(0x6716277, internal_6716277, public_6716277);
extern "C" NAKED register_t __cdecl internal_6716277()
{
    __asm
    {
        push 0xFFFFFFFF
        push dword ptr ss : [esp+0xC]
        push 0xFFFFFFFF
        push dword ptr ss : [esp+0x10]
        push 1
        push 0x409
        call dword ptr ds : [public_6717088]
        dec eax
        dec eax
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x6716277)
    }
}
