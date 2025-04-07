#include "FLServer-PCH.h"

PROC_DECLARE(0x4026d0, internal_4026d0, public_4026d0);
extern "C" NAKED register_t __cdecl internal_4026d0()
{
    __asm
    {
        mov word ptr ds : [public_425f68], 0
        mov byte ptr ds : [public_425f6a], 1
        ret 
        UNREACHABLE_TRAP(0x4026d0)
    }
}
