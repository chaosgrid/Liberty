#include "Freelancer-PCH.h"

PROC_DECLARE(0x564830, internal_564830, public_564830);
extern "C" NAKED register_t __cdecl internal_564830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2548]
        mov dword ptr ds : [public_67c1f4], eax
        ret 
        UNREACHABLE_TRAP(0x564830)
    }
}
