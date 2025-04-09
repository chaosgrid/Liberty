#include "Freelancer-PCH.h"

PROC_DECLARE(0x53abd0, internal_53abd0, public_53abd0);
extern "C" NAKED register_t __cdecl internal_53abd0()
{
    __asm
    {
        mov word ptr ds : [public_6789d8], 3
        mov byte ptr ds : [public_6789da], 1
        ret 
        UNREACHABLE_TRAP(0x53abd0)
    }
}
