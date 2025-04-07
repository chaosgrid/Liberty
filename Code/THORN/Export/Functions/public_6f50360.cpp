#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f50360, internal_6f50360, public_6f50360);
extern "C" NAKED register_t __cdecl internal_6f50360()
{
    __asm
    {
        push ecx
        push 0
        push 0
        push 1
        call public_6f4f6a0
        call public_6f57f16
        push eax
        call public_6f4e9e0
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        add esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f50360)
    }
}
