#include "FLServer-PCH.h"

PROC_DECLARE(0x411c50, internal_411c50, public_411c50);
extern "C" NAKED register_t __cdecl internal_411c50()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_427cf8], ax
        mov byte ptr ds : [public_427cfa], al
        ret 
        UNREACHABLE_TRAP(0x411c50)
    }
}
