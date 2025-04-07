#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad91cf);

PROC_DECLARE(0x6ad91cf, internal_6ad91cf, public_6ad91cf);
extern "C" NAKED register_t __cdecl internal_6ad91cf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        fnstsw word ptr ss : [ebp-2]
        fnclex 
        movsx eax, word ptr ss : [ebp-2]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad91cf)
    }
}
