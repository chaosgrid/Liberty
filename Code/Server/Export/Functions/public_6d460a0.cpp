#include "Server-PCH.h"

PROC_DECLARE(0x6d460a0, internal_6d460a0, public_6d460a0);
extern "C" NAKED register_t __cdecl internal_6d460a0()
{
    __asm
    {
        mov word ptr ds : [public_6d902b8], 4
        mov byte ptr ds : [public_6d902ba], 1
        ret 
        UNREACHABLE_TRAP(0x6d460a0)
    }
}
