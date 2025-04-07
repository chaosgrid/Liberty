#include "FLServer-PCH.h"

PROC_DECLARE(0x406330, internal_406330, public_406330);
extern "C" NAKED register_t __cdecl internal_406330()
{
    __asm
    {
        mov eax, offset public_41c530
        ret 
        UNREACHABLE_TRAP(0x406330)
    }
}
