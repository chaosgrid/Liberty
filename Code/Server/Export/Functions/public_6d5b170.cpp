#include "Server-PCH.h"

PROC_DECLARE(0x6d5b170, internal_6d5b170, public_6d5b170);
extern "C" NAKED register_t __cdecl internal_6d5b170()
{
    __asm
    {
        mov word ptr ds : [public_6d90430], 2
        mov byte ptr ds : [public_6d90432], 1
        ret 
        UNREACHABLE_TRAP(0x6d5b170)
    }
}
