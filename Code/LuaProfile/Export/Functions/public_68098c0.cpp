#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6804f00);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

PROC_DECLARE(0x68098c0, internal_68098c0, public_68098c0);
extern "C" NAKED register_t __cdecl internal_68098c0()
{
    __asm
    {
        push ecx
        push 2
        call public_6805e70
        add esp, 4
        call public_680bdaa
        push eax
        push 1
        call public_6805e70
        add esp, 4
        call public_680bdaa
        push eax
        call public_6804f00
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68098c0)
    }
}
