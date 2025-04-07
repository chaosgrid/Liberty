#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f6ec0, internal_4f6ec0, public_4f6ec0);
extern "C" NAKED register_t __cdecl internal_4f6ec0()
{
    __asm
    {
        mov dword ptr ds : [public_674f40], 0
        ret 
        UNREACHABLE_TRAP(0x4f6ec0)
    }
}
