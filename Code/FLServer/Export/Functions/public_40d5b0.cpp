#include "FLServer-PCH.h"

PROC_DECLARE(0x40d5b0, internal_40d5b0, public_40d5b0);
extern "C" NAKED register_t __cdecl internal_40d5b0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_427844], ax
        mov byte ptr ds : [public_427846], al
        ret 
        UNREACHABLE_TRAP(0x40d5b0)
    }
}
