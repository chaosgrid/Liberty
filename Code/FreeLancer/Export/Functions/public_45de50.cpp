#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45de50, internal_45de50, public_45de50);
extern "C" NAKED register_t __cdecl internal_45de50()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_66da40], ax
        mov byte ptr ds : [public_66da42], al
        ret 
        UNREACHABLE_TRAP(0x45de50)
    }
}
