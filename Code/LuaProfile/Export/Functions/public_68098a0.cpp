#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6804e70);

PROC_DECLARE(0x68098a0, internal_68098a0, public_68098a0);
extern "C" NAKED register_t __cdecl internal_68098a0()
{
    __asm
    {
        push ecx
        call public_6804e70
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68098a0)
    }
}
