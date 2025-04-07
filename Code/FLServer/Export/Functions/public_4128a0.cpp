#include "FLServer-PCH.h"

PROC_DECLARE(0x4128a0, internal_4128a0, public_4128a0);
extern "C" NAKED register_t __cdecl internal_4128a0()
{
    __asm
    {
        mov word ptr ds : [public_428c3c], 4
        mov byte ptr ds : [public_428c3e], 1
        ret 
        UNREACHABLE_TRAP(0x4128a0)
    }
}
