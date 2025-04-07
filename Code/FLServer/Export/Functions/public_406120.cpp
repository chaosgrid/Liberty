#include "FLServer-PCH.h"

PROC_DECLARE(0x406120, internal_406120, public_406120);
extern "C" NAKED register_t __cdecl internal_406120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c4e0]
        mov dword ptr ds : [public_4260a0], eax
        ret 
        UNREACHABLE_TRAP(0x406120)
    }
}
