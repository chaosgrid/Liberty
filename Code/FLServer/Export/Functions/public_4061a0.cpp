#include "FLServer-PCH.h"

PROC_DECLARE(0x4061a0, internal_4061a0, public_4061a0);
extern "C" NAKED register_t __cdecl internal_4061a0()
{
    __asm
    {
        mov word ptr ds : [public_4261b4], 3
        mov byte ptr ds : [public_4261b6], 1
        ret 
        UNREACHABLE_TRAP(0x4061a0)
    }
}
