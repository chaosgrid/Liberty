#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b714c, internal_5b714c, public_5b714c);
extern "C" NAKED register_t __cdecl internal_5b714c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66e0]
        UNREACHABLE_TRAP(0x5b714c)
    }
}
