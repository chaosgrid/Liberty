#include "FLServer-PCH.h"

PROC_DECLARE(0x40f860, internal_40f860, public_40f860);
extern "C" NAKED register_t __cdecl internal_40f860()
{
    __asm
    {
        mov word ptr ds : [public_427ce4], 0
        mov byte ptr ds : [public_427ce6], 1
        ret 
        UNREACHABLE_TRAP(0x40f860)
    }
}
