#include "FLServer-PCH.h"

PROC_DECLARE(0x415c40, internal_415c40, public_415c40);
extern "C" NAKED register_t __cdecl internal_415c40()
{
    __asm
    {
        mov word ptr ds : [public_429570], 4
        mov byte ptr ds : [public_429572], 1
        ret 
        UNREACHABLE_TRAP(0x415c40)
    }
}
