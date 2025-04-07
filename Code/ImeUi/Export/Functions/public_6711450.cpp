#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711450, internal_6711450, public_6711450);
extern "C" NAKED register_t __cdecl internal_6711450()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x15], al
        ret 4
        UNREACHABLE_TRAP(0x6711450)
    }
}
