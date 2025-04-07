#include "FLServer-PCH.h"

PROC_DECLARE(0x415ea0, internal_415ea0, public_415ea0);
extern "C" NAKED register_t __cdecl internal_415ea0()
{
    __asm
    {
        mov word ptr ds : [public_429d98], 3
        mov byte ptr ds : [public_429d9a], 1
        ret 
        UNREACHABLE_TRAP(0x415ea0)
    }
}
