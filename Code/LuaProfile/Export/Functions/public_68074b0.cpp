#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);

PROC_DECLARE(0x68074b0, internal_68074b0, public_68074b0);
extern "C" NAKED register_t __cdecl internal_68074b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push 1
        push eax
        push 0xB
        push ecx
        call public_6806ed0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x68074b0)
    }
}
