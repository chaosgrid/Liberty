#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_68036d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805eb0);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

PROC_DECLARE(0x68099f0, internal_68099f0, public_68099f0);
extern "C" NAKED register_t __cdecl internal_68099f0()
{
    __asm
    {
        push ecx
        push 0
        push 0
        push 1
        call public_6805eb0
        call public_680bdaa
        push eax
        call public_68036d0
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        add esp, 8
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68099f0)
    }
}
