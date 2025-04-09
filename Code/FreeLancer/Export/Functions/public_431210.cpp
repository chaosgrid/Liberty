#include "Freelancer-PCH.h"

PROC_DECLARE(0x431210, internal_431210, public_431210);
extern "C" NAKED register_t __cdecl internal_431210()
{
    __asm
    {
        movsx eax, byte ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x431210)
    }
}
