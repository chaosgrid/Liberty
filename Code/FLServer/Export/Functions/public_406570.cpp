#include "FLServer-PCH.h"

PROC_DECLARE(0x406570, internal_406570, public_406570);
extern "C" NAKED register_t __cdecl internal_406570()
{
    __asm
    {
        mov word ptr ds : [public_4261e8], 0
        mov byte ptr ds : [public_4261ea], 1
        ret 
        UNREACHABLE_TRAP(0x406570)
    }
}
