#include "FLServer-PCH.h"

PROC_DECLARE(0x407420, internal_407420, public_407420);
extern "C" NAKED register_t __cdecl internal_407420()
{
    __asm
    {
        mov word ptr ds : [public_426264], 0
        mov byte ptr ds : [public_426266], 1
        ret 
        UNREACHABLE_TRAP(0x407420)
    }
}
