#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3390);

PROC_DECLARE(0x6ad3390, internal_6ad3390, public_6ad3390);
extern "C" NAKED register_t __cdecl internal_6ad3390()
{
    __asm
    {
        fld st(0)
        frndint 
        fsubr st(1), st
        fxch 
        fchs 
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        ret 
        UNREACHABLE_TRAP(0x6ad3390)
    }
}
