#include "FLServer-PCH.h"

PROC_DECLARE(0x40d610, internal_40d610, public_40d610);
extern "C" NAKED register_t __cdecl internal_40d610()
{
    __asm
    {
        mov word ptr ds : [public_427854], 4
        mov byte ptr ds : [public_427856], 1
        ret 
        UNREACHABLE_TRAP(0x40d610)
    }
}
