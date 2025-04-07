#include "FLServer-PCH.h"

PROC_DECLARE(0x40dbb0, internal_40dbb0, public_40dbb0);
extern "C" NAKED register_t __cdecl internal_40dbb0()
{
    __asm
    {
        mov word ptr ds : [public_427880], 3
        mov byte ptr ds : [public_427882], 1
        ret 
        UNREACHABLE_TRAP(0x40dbb0)
    }
}
