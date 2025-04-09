#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ab70, internal_53ab70, public_53ab70);
extern "C" NAKED register_t __cdecl internal_53ab70()
{
    __asm
    {
        mov word ptr ds : [public_6789e4], 0
        mov byte ptr ds : [public_6789e6], 1
        ret 
        UNREACHABLE_TRAP(0x53ab70)
    }
}
