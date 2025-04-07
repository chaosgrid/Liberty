#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

PROC_DECLARE(0x6f56700, internal_6f56700, public_6f56700);
extern "C" NAKED register_t __cdecl internal_6f56700()
{
    __asm
    {
        push 1
        call public_6f4f660
        fldl2e 
        push ecx
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56700)
    }
}
