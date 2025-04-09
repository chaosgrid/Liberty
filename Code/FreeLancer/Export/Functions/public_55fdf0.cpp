#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55fdf0, internal_55fdf0, public_55fdf0);
extern "C" NAKED register_t __cdecl internal_55fdf0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_679b64], ax
        mov byte ptr ds : [public_679b66], al
        ret 
        UNREACHABLE_TRAP(0x55fdf0)
    }
}
