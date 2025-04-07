#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801df0);
CLANG_FORWARD_PROC_SYMBOL(public_6801f90);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

PROC_DECLARE(0x6801f90, internal_6801f90, public_6801f90);
extern "C" NAKED register_t __cdecl internal_6801f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6805a80
        add eax, 0x10
        push eax
        call public_6801df0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6801f90)
    }
}
