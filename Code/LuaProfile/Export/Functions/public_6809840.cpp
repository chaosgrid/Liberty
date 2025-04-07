#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6802480);

PROC_DECLARE(0x6809840, internal_6809840, public_6809840);
extern "C" NAKED register_t __cdecl internal_6809840()
{
    __asm
    {
        push ecx
        push 1
        call public_6801cf0
        push eax
        call public_6802480
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6809840)
    }
}
