#include "FLServer-PCH.h"

PROC_DECLARE(0x40e4f0, internal_40e4f0, public_40e4f0);
extern "C" NAKED register_t __cdecl internal_40e4f0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_427cac], ax
        mov byte ptr ds : [public_427cae], al
        ret 
        UNREACHABLE_TRAP(0x40e4f0)
    }
}
