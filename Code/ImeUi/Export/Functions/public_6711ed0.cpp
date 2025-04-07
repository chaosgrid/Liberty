#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ed0, internal_6711ed0, public_6711ed0);
extern "C" NAKED register_t __cdecl internal_6711ed0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x17]
        ret 
        UNREACHABLE_TRAP(0x6711ed0)
    }
}
