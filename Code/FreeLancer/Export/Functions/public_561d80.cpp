#include "FreeLancer-PCH.h"

PROC_DECLARE(0x561d80, internal_561d80, public_561d80);
extern "C" NAKED register_t __cdecl internal_561d80()
{
    __asm
    {
        mov al, 0xFF
        mov byte ptr ds : [public_679b80], 0xCE
        mov byte ptr ds : [public_679b81], 0x5A
        mov byte ptr ds : [public_679b82], al
        mov byte ptr ds : [public_679b83], al
        ret 
        UNREACHABLE_TRAP(0x561d80)
    }
}
