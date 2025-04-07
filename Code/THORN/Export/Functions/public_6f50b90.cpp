#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);

PROC_DECLARE(0x6f50b90, internal_6f50b90, public_6f50b90);
extern "C" NAKED register_t __cdecl internal_6f50b90()
{
    __asm
    {
        push 1
        call public_6f505e0
        push eax
        call public_6f50550
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f50b90)
    }
}
