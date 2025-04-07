#include "Server-PCH.h"

PROC_DECLARE(0x6d06bf0, internal_6d06bf0, public_6d06bf0);
extern "C" NAKED register_t __cdecl internal_6d06bf0()
{
    __asm
    {
        mov word ptr ds : [public_6d8d9d4], 3
        mov byte ptr ds : [public_6d8d9d6], 1
        ret 
        UNREACHABLE_TRAP(0x6d06bf0)
    }
}
