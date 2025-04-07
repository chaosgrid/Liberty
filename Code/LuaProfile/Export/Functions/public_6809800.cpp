#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);

PROC_DECLARE(0x6809800, internal_6809800, public_6809800);
extern "C" NAKED register_t __cdecl internal_6809800()
{
    __asm
    {
        push 0
        push 1
        call public_6805df0
        push eax
        call public_6801f70
        push eax
        call public_6802420
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6809800)
    }
}
