#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68069d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807430);

PROC_DECLARE(0x6807430, internal_6807430, public_6807430);
extern "C" NAKED register_t __cdecl internal_6807430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push 0
        push ecx
        call public_68069d0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6807430)
    }
}
