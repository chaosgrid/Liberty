#include "FLServer-PCH.h"

PROC_DECLARE(0x40f850, internal_40f850, public_40f850);
extern "C" NAKED register_t __cdecl internal_40f850()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_427cd4], ax
        mov byte ptr ds : [public_427cd6], al
        ret 
        UNREACHABLE_TRAP(0x40f850)
    }
}
