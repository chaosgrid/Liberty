#include "FLServer-PCH.h"

PROC_DECLARE(0x4061c0, internal_4061c0, public_4061c0);
extern "C" NAKED register_t __cdecl internal_4061c0()
{
    __asm
    {
        mov word ptr ds : [public_4261b8], 4
        mov byte ptr ds : [public_4261ba], 1
        ret 
        UNREACHABLE_TRAP(0x4061c0)
    }
}
