#include "FLServer-PCH.h"

PROC_DECLARE(0x415870, internal_415870, public_415870);
extern "C" NAKED register_t __cdecl internal_415870()
{
    __asm
    {
        mov word ptr ds : [public_42954c], 0
        mov byte ptr ds : [public_42954e], 1
        ret 
        UNREACHABLE_TRAP(0x415870)
    }
}
