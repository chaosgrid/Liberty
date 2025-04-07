#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad30f1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3117);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad311e);

PROC_DECLARE(0x6ad30f1, internal_6ad30f1, public_6ad30f1);
extern "C" NAKED register_t __cdecl internal_6ad30f1()
{
    __asm
    {
        fld st(0)
        frndint 
        fcomp 
        wait 
        fnstsw ax
        sahf 
        jne public_6ad3117
        fld st(0)
        fmul qword ptr ds : [public_6addbb2]
        fld st(0)
        frndint 
        fcompp 
        wait 
        fnstsw ax
        sahf 
        je public_6ad311e
        mov eax, 1
        UNREACHABLE_TRAP(0x6ad30f1)
    }
}
