#include "Freelancer-PCH.h"

PROC_DECLARE(0x431580, internal_431580, public_431580);
extern "C" NAKED register_t __cdecl internal_431580()
{
    __asm
    {
        mov eax, offset public_5c865c
        ret 4
        UNREACHABLE_TRAP(0x431580)
    }
}
