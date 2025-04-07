#include "FLServer-PCH.h"

PROC_DECLARE(0x407440, internal_407440, public_407440);
extern "C" NAKED register_t __cdecl internal_407440()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_426250], ax
        mov byte ptr ds : [public_426252], al
        ret 
        UNREACHABLE_TRAP(0x407440)
    }
}
