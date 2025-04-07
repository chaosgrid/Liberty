#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68053a0);
CLANG_FORWARD_PROC_SYMBOL(public_6805590);

PROC_DECLARE(0x6805590, internal_6805590, public_6805590);
extern "C" NAKED register_t __cdecl internal_6805590()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x1C]
        fild dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+4]
        fstp qword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        call public_68053a0
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6805590)
    }
}
