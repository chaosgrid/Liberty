#include "Server-PCH.h"

PROC_DECLARE(0x6d17240, internal_6d17240, public_6d17240);
extern "C" NAKED register_t __cdecl internal_6d17240()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8e55c], ax
        mov byte ptr ds : [public_6d8e55e], al
        ret 
        UNREACHABLE_TRAP(0x6d17240)
    }
}
