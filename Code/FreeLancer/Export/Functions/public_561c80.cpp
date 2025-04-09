#include "FreeLancer-PCH.h"

PROC_DECLARE(0x561c80, internal_561c80, public_561c80);
extern "C" NAKED register_t __cdecl internal_561c80()
{
    __asm
    {
        mov al, 0xFF
        mov byte ptr ds : [public_679ba0], al
        mov byte ptr ds : [public_679ba1], 0xA6
        mov byte ptr ds : [public_679ba2], 0x26
        mov byte ptr ds : [public_679ba3], al
        ret 
        UNREACHABLE_TRAP(0x561c80)
    }
}
