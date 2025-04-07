#include "FLServer-PCH.h"

PROC_DECLARE(0x4158f0, internal_4158f0, public_4158f0);
extern "C" NAKED register_t __cdecl internal_4158f0()
{
    __asm
    {
        mov word ptr ds : [public_429548], 4
        mov byte ptr ds : [public_42954a], 1
        ret 
        UNREACHABLE_TRAP(0x4158f0)
    }
}
