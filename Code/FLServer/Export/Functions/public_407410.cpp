#include "FLServer-PCH.h"

PROC_DECLARE(0x407410, internal_407410, public_407410);
extern "C" NAKED register_t __cdecl internal_407410()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_426254], ax
        mov byte ptr ds : [public_426256], al
        ret 
        UNREACHABLE_TRAP(0x407410)
    }
}
