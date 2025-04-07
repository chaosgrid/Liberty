#include "FLServer-PCH.h"

PROC_DECLARE(0x4065d0, internal_4065d0, public_4065d0);
extern "C" NAKED register_t __cdecl internal_4065d0()
{
    __asm
    {
        mov word ptr ds : [public_4261e0], 3
        mov byte ptr ds : [public_4261e2], 1
        ret 
        UNREACHABLE_TRAP(0x4065d0)
    }
}
