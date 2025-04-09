#include "Freelancer-PCH.h"

PROC_DECLARE(0x55fe80, internal_55fe80, public_55fe80);
extern "C" NAKED register_t __cdecl internal_55fe80()
{
    __asm
    {
        mov word ptr ds : [public_679b50], 4
        mov byte ptr ds : [public_679b52], 1
        ret 
        UNREACHABLE_TRAP(0x55fe80)
    }
}
