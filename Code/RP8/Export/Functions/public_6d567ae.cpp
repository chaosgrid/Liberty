#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5647a);
CLANG_FORWARD_PROC_SYMBOL(public_6d567ae);

PROC_DECLARE(0x6d567ae, internal_6d567ae, public_6d567ae);
extern "C" NAKED register_t __cdecl internal_6d567ae()
{
    __asm
    {
        femms 
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6d5647a
        femms 
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d567ae)
    }
}
