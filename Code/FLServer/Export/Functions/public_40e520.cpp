#include "FLServer-PCH.h"

PROC_DECLARE(0x40e520, internal_40e520, public_40e520);
extern "C" NAKED register_t __cdecl internal_40e520()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_427ca8], ax
        mov byte ptr ds : [public_427caa], al
        ret 
        UNREACHABLE_TRAP(0x40e520)
    }
}
