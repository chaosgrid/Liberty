#include "FLServer-PCH.h"

PROC_DECLARE(0x413c50, internal_413c50, public_413c50);
extern "C" NAKED register_t __cdecl internal_413c50()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_428cd4], ax
        mov byte ptr ds : [public_428cd6], al
        ret 
        UNREACHABLE_TRAP(0x413c50)
    }
}
