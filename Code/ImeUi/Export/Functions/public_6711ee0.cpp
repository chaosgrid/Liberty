#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ee0, internal_6711ee0, public_6711ee0);
extern "C" NAKED register_t __cdecl internal_6711ee0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x15]
        ret 
        UNREACHABLE_TRAP(0x6711ee0)
    }
}
