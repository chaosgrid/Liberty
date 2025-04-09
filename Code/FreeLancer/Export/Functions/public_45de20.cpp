#include "Freelancer-PCH.h"

PROC_DECLARE(0x45de20, internal_45de20, public_45de20);
extern "C" NAKED register_t __cdecl internal_45de20()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_66da48], ax
        mov byte ptr ds : [public_66da4a], al
        ret 
        UNREACHABLE_TRAP(0x45de20)
    }
}
