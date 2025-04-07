#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e20);

PROC_DECLARE(0x62aca10, internal_62aca10, public_62aca10);
extern "C" NAKED register_t __cdecl internal_62aca10()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push ecx
        mov byte ptr ss : [esp+8], 0
        call public_6284e20
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62aca10)
    }
}
