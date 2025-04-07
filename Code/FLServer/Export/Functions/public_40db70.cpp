#include "FLServer-PCH.h"

PROC_DECLARE(0x40db70, internal_40db70, public_40db70);
extern "C" NAKED register_t __cdecl internal_40db70()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_427874], ax
        mov byte ptr ds : [public_427876], al
        ret 
        UNREACHABLE_TRAP(0x40db70)
    }
}
