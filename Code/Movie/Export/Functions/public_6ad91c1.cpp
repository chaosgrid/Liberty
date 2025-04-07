#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad91c1);

PROC_DECLARE(0x6ad91c1, internal_6ad91c1, public_6ad91c1);
extern "C" NAKED register_t __cdecl internal_6ad91c1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        wait 
        fnstsw word ptr ss : [ebp-2]
        movsx eax, word ptr ss : [ebp-2]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad91c1)
    }
}
