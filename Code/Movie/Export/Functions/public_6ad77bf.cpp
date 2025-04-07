#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad77bf);

PROC_DECLARE(0x6ad77bf, internal_6ad77bf, public_6ad77bf);
extern "C" NAKED register_t __cdecl internal_6ad77bf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        fld qword ptr ss : [ebp+8]
        frndint 
        fstp qword ptr ss : [ebp-8]
        fld qword ptr ss : [ebp-8]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad77bf)
    }
}
