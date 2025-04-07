#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);

PROC_DECLARE(0x68055c0, internal_68055c0, public_68055c0);
extern "C" NAKED register_t __cdecl internal_68055c0()
{
    __asm
    {
        sub esp, 0x10
        fild dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp]
        push eax
        push ecx
        fstp qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        call public_68051d0
        add eax, 0x10
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x68055c0)
    }
}
