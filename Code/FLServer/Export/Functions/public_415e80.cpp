#include "FLServer-PCH.h"

PROC_DECLARE(0x415e80, internal_415e80, public_415e80);
extern "C" NAKED register_t __cdecl internal_415e80()
{
    __asm
    {
        mov word ptr ds : [public_429db8], 2
        mov byte ptr ds : [public_429dba], 1
        ret 
        UNREACHABLE_TRAP(0x415e80)
    }
}
