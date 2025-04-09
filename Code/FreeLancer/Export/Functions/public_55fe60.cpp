#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55fe60, internal_55fe60, public_55fe60);
extern "C" NAKED register_t __cdecl internal_55fe60()
{
    __asm
    {
        mov word ptr ds : [public_679b54], 3
        mov byte ptr ds : [public_679b56], 1
        ret 
        UNREACHABLE_TRAP(0x55fe60)
    }
}
