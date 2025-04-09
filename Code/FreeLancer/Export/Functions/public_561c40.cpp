#include "Freelancer-PCH.h"

PROC_DECLARE(0x561c40, internal_561c40, public_561c40);
extern "C" NAKED register_t __cdecl internal_561c40()
{
    __asm
    {
        mov al, 0x1D
        mov byte ptr ds : [public_679ba8], 0xBF
        mov byte ptr ds : [public_679ba9], al
        mov byte ptr ds : [public_679baa], al
        mov byte ptr ds : [public_679bab], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561c40)
    }
}
