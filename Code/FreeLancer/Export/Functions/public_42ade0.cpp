#include "Freelancer-PCH.h"

PROC_DECLARE(0x42ade0, internal_42ade0, public_42ade0);
extern "C" NAKED register_t __cdecl internal_42ade0()
{
    __asm
    {
        movsx eax, byte ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x42ade0)
    }
}
