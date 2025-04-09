#include "FreeLancer-PCH.h"

PROC_DECLARE(0x561ce0, internal_561ce0, public_561ce0);
extern "C" NAKED register_t __cdecl internal_561ce0()
{
    __asm
    {
        mov al, 0x80
        mov byte ptr ds : [public_679b94], al
        mov byte ptr ds : [public_679b95], al
        mov byte ptr ds : [public_679b96], al
        mov byte ptr ds : [public_679b97], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561ce0)
    }
}
