#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55fe40, internal_55fe40, public_55fe40);
extern "C" NAKED register_t __cdecl internal_55fe40()
{
    __asm
    {
        mov word ptr ds : [public_679b58], 2
        mov byte ptr ds : [public_679b5a], 1
        ret 
        UNREACHABLE_TRAP(0x55fe40)
    }
}
