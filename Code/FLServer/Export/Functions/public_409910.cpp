#include "FLServer-PCH.h"

PROC_DECLARE(0x409910, internal_409910, public_409910);
extern "C" NAKED register_t __cdecl internal_409910()
{
    __asm
    {
        mov word ptr ds : [public_427808], 0
        mov byte ptr ds : [public_42780a], 1
        ret 
        UNREACHABLE_TRAP(0x409910)
    }
}
