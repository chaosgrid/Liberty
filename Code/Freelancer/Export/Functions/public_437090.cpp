#include "Freelancer-PCH.h"

PROC_DECLARE(0x437090, internal_437090, public_437090);
extern "C" NAKED register_t __cdecl internal_437090()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6686bc], ax
        mov byte ptr ds : [public_6686be], al
        ret 
        UNREACHABLE_TRAP(0x437090)
    }
}
