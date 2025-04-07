#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419978);
CLANG_FORWARD_PROC_SYMBOL(public_4199a6);

PROC_DECLARE(0x4199a6, internal_4199a6, public_4199a6);
extern "C" NAKED register_t __cdecl internal_4199a6()
{
    __asm
    {
        push 0x600
        push 0
        call public_419978
        mov byte ptr ds : [public_42a730], al
        ret 
        UNREACHABLE_TRAP(0x4199a6)
    }
}
