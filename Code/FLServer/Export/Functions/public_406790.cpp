#include "FLServer-PCH.h"

PROC_DECLARE(0x406790, internal_406790, public_406790);
extern "C" NAKED register_t __cdecl internal_406790()
{
    __asm
    {
        mov word ptr ds : [public_426214], 2
        mov byte ptr ds : [public_426216], 1
        ret 
        UNREACHABLE_TRAP(0x406790)
    }
}
