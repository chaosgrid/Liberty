#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712850);
CLANG_FORWARD_PROC_SYMBOL(public_6714550);
CLANG_FORWARD_PROC_SYMBOL(public_67152f0);

PROC_DECLARE(0x6712e90, internal_6712e90, public_6712e90);
extern "C" NAKED register_t __cdecl internal_6712e90()
{
    __asm
    {
        call public_6712850
        push 1
        call public_67152f0
        push 0
        call public_6714550
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6712e90)
    }
}
