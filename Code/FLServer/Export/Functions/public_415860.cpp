#include "FLServer-PCH.h"

PROC_DECLARE(0x415860, internal_415860, public_415860);
extern "C" NAKED register_t __cdecl internal_415860()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_42953c], ax
        mov byte ptr ds : [public_42953e], al
        ret 
        UNREACHABLE_TRAP(0x415860)
    }
}
