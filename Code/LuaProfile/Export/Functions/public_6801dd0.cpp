#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6801df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805020);

PROC_DECLARE(0x6801dd0, internal_6801dd0, public_6801dd0);
extern "C" NAKED register_t __cdecl internal_6801dd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_6805020
        push eax
        call public_6801df0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6801dd0)
    }
}
