#include "FLServer-PCH.h"

PROC_DECLARE(0x415ec0, internal_415ec0, public_415ec0);
extern "C" NAKED register_t __cdecl internal_415ec0()
{
    __asm
    {
        mov word ptr ds : [public_429d9c], 4
        mov byte ptr ds : [public_429d9e], 1
        ret 
        UNREACHABLE_TRAP(0x415ec0)
    }
}
