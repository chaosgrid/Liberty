#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542d10, internal_542d10, public_542d10);
extern "C" NAKED register_t __cdecl internal_542d10()
{
    __asm
    {
        mov eax, offset public_5dfb2c
        ret 
        UNREACHABLE_TRAP(0x542d10)
    }
}
