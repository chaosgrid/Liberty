#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55530);

PROC_DECLARE(0x6f511c0, internal_6f511c0, public_6f511c0);
extern "C" NAKED register_t __cdecl internal_6f511c0()
{
    __asm
    {
        push 0
        call public_6f55450
        call public_6f55530
        mov ecx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_6f51170
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f511c0)
    }
}
