#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f567b0, internal_6f567b0, public_6f567b0);
extern "C" NAKED register_t __cdecl internal_6f567b0()
{
    __asm
    {
        push 2
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        push 1
        call public_6f4f660
        push ecx
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6f5a14c]
        add esp, 4
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f567b0)
    }
}
