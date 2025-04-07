#include "Freelancer-PCH.h"

PROC_DECLARE(0x561d00, internal_561d00, public_561d00);
extern "C" NAKED register_t __cdecl internal_561d00()
{
    __asm
    {
        mov byte ptr ds : [public_679b90], 0xA8
        mov byte ptr ds : [public_679b91], 0xFB
        mov byte ptr ds : [public_679b92], 0xC5
        mov byte ptr ds : [public_679b93], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561d00)
    }
}
