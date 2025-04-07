#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44c490);

PROC_DECLARE(0x44c490, internal_44c490, public_44c490);
extern "C" NAKED register_t __cdecl internal_44c490()
{
    __asm
    {
        xor al, al
        mov byte ptr ds : [ecx+0x1338], al
        mov byte ptr ds : [public_66d359], al
        ret 
        UNREACHABLE_TRAP(0x44c490)
    }
}
