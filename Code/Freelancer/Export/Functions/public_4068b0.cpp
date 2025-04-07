#include "Freelancer-PCH.h"

PROC_DECLARE(0x4068b0, internal_4068b0, public_4068b0);
extern "C" NAKED register_t __cdecl internal_4068b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7728]
        mov dword ptr ds : [public_6164a8], eax
        ret 
        UNREACHABLE_TRAP(0x4068b0)
    }
}
