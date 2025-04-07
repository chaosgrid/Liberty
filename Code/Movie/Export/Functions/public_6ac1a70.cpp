#include "Movie-PCH.h"

PROC_DECLARE(0x6ac1a70, internal_6ac1a70, public_6ac1a70);
extern "C" NAKED register_t __cdecl internal_6ac1a70()
{
    __asm
    {
        mov dword ptr ds : [public_6ae0930], 0
        ret 
        UNREACHABLE_TRAP(0x6ac1a70)
    }
}
