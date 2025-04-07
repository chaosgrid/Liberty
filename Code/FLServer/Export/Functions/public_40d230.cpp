#include "FLServer-PCH.h"

PROC_DECLARE(0x40d230, internal_40d230, public_40d230);
extern "C" NAKED register_t __cdecl internal_40d230()
{
    __asm
    {
        mov byte ptr ds : [0], 0
        ret 
        UNREACHABLE_TRAP(0x40d230)
    }
}
