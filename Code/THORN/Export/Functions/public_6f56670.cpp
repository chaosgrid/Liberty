#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f5830c);

PROC_DECLARE(0x6f56670, internal_6f56670, public_6f56670);
extern "C" NAKED register_t __cdecl internal_6f56670()
{
    __asm
    {
        sub esp, 8
        push 1
        call public_6f4f660
        fstp qword ptr ss : [esp+4]
        push 2
        call public_6f4f660
        fld qword ptr ss : [esp+8]
        fxch 
        call public_6f5830c
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f56670)
    }
}
