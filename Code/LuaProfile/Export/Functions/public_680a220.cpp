#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);

PROC_DECLARE(0x680a220, internal_680a220, public_680a220);
extern "C" NAKED register_t __cdecl internal_680a220()
{
    __asm
    {
        push 1
        call public_6809c70
        push eax
        call public_6809be0
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x680a220)
    }
}
