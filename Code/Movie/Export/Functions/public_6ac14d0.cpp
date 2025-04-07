#include "Movie-PCH.h"

PROC_DECLARE(0x6ac14d0, internal_6ac14d0, public_6ac14d0);
extern "C" NAKED register_t __cdecl internal_6ac14d0()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0xC]
        xor eax, eax
        test dl, dl
        sete al
        ret 
        UNREACHABLE_TRAP(0x6ac14d0)
    }
}
