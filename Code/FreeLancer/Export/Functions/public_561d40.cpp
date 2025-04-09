#include "FreeLancer-PCH.h"

PROC_DECLARE(0x561d40, internal_561d40, public_561d40);
extern "C" NAKED register_t __cdecl internal_561d40()
{
    __asm
    {
        mov al, 0xFF
        mov byte ptr ds : [public_679b88], al
        mov byte ptr ds : [public_679b89], 0x7E
        mov byte ptr ds : [public_679b8a], 0xFD
        mov byte ptr ds : [public_679b8b], al
        ret 
        UNREACHABLE_TRAP(0x561d40)
    }
}
