#include "FreeLancer-PCH.h"

PROC_DECLARE(0x561c20, internal_561c20, public_561c20);
extern "C" NAKED register_t __cdecl internal_561c20()
{
    __asm
    {
        mov byte ptr ds : [public_679bac], 0x3B
        mov byte ptr ds : [public_679bad], 0xBF
        mov byte ptr ds : [public_679bae], 0x1D
        mov byte ptr ds : [public_679baf], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561c20)
    }
}
