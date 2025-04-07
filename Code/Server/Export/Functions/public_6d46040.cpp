#include "Server-PCH.h"

PROC_DECLARE(0x6d46040, internal_6d46040, public_6d46040);
extern "C" NAKED register_t __cdecl internal_6d46040()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d902c4], ax
        mov byte ptr ds : [public_6d902c6], al
        ret 
        UNREACHABLE_TRAP(0x6d46040)
    }
}
