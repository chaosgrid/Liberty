#include "FLServer-PCH.h"

PROC_DECLARE(0x40f8c0, internal_40f8c0, public_40f8c0);
extern "C" NAKED register_t __cdecl internal_40f8c0()
{
    __asm
    {
        mov word ptr ds : [public_427cdc], 3
        mov byte ptr ds : [public_427cde], 1
        ret 
        UNREACHABLE_TRAP(0x40f8c0)
    }
}
