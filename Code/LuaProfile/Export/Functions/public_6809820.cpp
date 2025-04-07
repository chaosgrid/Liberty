#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801f90);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);

PROC_DECLARE(0x6809820, internal_6809820, public_6809820);
extern "C" NAKED register_t __cdecl internal_6809820()
{
    __asm
    {
        push 0
        push 1
        call public_6805df0
        push eax
        call public_6801f90
        push eax
        call public_6802420
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6809820)
    }
}
