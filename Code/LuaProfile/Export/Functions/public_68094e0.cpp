#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805df0);

PROC_DECLARE(0x68094e0, internal_68094e0, public_68094e0);
extern "C" NAKED register_t __cdecl internal_68094e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680c050]
        add eax, 0x40
        push eax
        push 0
        push 1
        call public_6805df0
        add esp, 8
        push eax
        call dword ptr ds : [public_680c080]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x68094e0)
    }
}
