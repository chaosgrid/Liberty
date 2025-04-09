#include "Freelancer-PCH.h"

PROC_DECLARE(0x55fe20, internal_55fe20, public_55fe20);
extern "C" NAKED register_t __cdecl internal_55fe20()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_679b5c], ax
        mov byte ptr ds : [public_679b5e], al
        ret 
        UNREACHABLE_TRAP(0x55fe20)
    }
}
