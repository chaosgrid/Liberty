#include "Freelancer-PCH.h"

PROC_DECLARE(0x561c60, internal_561c60, public_561c60);
extern "C" NAKED register_t __cdecl internal_561c60()
{
    __asm
    {
        mov byte ptr ds : [public_679ba4], 0xF5
        mov byte ptr ds : [public_679ba5], 0xEA
        mov byte ptr ds : [public_679ba6], 0x52
        mov byte ptr ds : [public_679ba7], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561c60)
    }
}
