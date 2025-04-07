#include "FLServer-PCH.h"

PROC_DECLARE(0x415bc0, internal_415bc0, public_415bc0);
extern "C" NAKED register_t __cdecl internal_415bc0()
{
    __asm
    {
        mov word ptr ds : [public_429574], 0
        mov byte ptr ds : [public_429576], 1
        ret 
        UNREACHABLE_TRAP(0x415bc0)
    }
}
