#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d230);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

PROC_DECLARE(0x6f4b3b0, internal_6f4b3b0, public_6f4b3b0);
extern "C" NAKED register_t __cdecl internal_6f4b3b0()
{
    __asm
    {
        push 1
        call public_6f4aff0
        push 2
        call public_6f4c260
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_6f4f270
        push eax
        call public_6f4d230
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4b3b0)
    }
}
