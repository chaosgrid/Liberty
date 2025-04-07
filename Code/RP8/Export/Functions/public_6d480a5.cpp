#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d480a5);

PROC_DECLARE(0x6d480a5, internal_6d480a5, public_6d480a5);
extern "C" NAKED register_t __cdecl internal_6d480a5()
{
    __asm
    {
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        push 0xF
        push dword ptr ss : [esp+0x10]
        call public_6d47fc0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d480a5)
    }
}
