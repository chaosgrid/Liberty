#include "FLServer-PCH.h"

PROC_DECLARE(0x40f880, internal_40f880, public_40f880);
extern "C" NAKED register_t __cdecl internal_40f880()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_427cd0], ax
        mov byte ptr ds : [public_427cd2], al
        ret 
        UNREACHABLE_TRAP(0x40f880)
    }
}
