#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b717c, internal_5b717c, public_5b717c);
extern "C" NAKED register_t __cdecl internal_5b717c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6700]
        UNREACHABLE_TRAP(0x5b717c)
    }
}
