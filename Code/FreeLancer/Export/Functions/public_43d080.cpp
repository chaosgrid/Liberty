#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d080, internal_43d080, public_43d080);
extern "C" NAKED register_t __cdecl internal_43d080()
{
    __asm
    {
        mov word ptr ds : [public_66879c], 0
        mov byte ptr ds : [public_66879e], 1
        ret 
        UNREACHABLE_TRAP(0x43d080)
    }
}
