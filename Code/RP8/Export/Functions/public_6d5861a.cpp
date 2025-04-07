#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2c4);
CLANG_FORWARD_PROC_SYMBOL(public_6d5861a);

PROC_DECLARE(0x6d5861a, internal_6d5861a, public_6d5861a);
extern "C" NAKED register_t __cdecl internal_6d5861a()
{
    __asm
    {
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6d2f2c4
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d5861a)
    }
}
