#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c9710, internal_4c9710, public_4c9710);
extern "C" NAKED register_t __cdecl internal_4c9710()
{
    __asm
    {
        mov word ptr ds : [public_6748d8], 2
        mov byte ptr ds : [public_6748da], 1
        ret 
        UNREACHABLE_TRAP(0x4c9710)
    }
}
