#include "Server-PCH.h"

PROC_DECLARE(0x6d17260, internal_6d17260, public_6d17260);
extern "C" NAKED register_t __cdecl internal_6d17260()
{
    __asm
    {
        mov word ptr ds : [public_6d8e558], 2
        mov byte ptr ds : [public_6d8e55a], 1
        ret 
        UNREACHABLE_TRAP(0x6d17260)
    }
}
