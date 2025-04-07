#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a650);

PROC_DECLARE(0x6d5a650, internal_6d5a650, public_6d5a650);
extern "C" NAKED register_t __cdecl internal_6d5a650()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push dword ptr ds : [eax+0x28]
        call dword ptr ds : [eax+0x24]
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d5a650)
    }
}
