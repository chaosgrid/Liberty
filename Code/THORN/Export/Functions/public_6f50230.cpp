#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e160);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f50230, internal_6f50230, public_6f50230);
extern "C" NAKED register_t __cdecl internal_6f50230()
{
    __asm
    {
        push ecx
        push 2
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        push 1
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        call public_6f4e160
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f50230)
    }
}
