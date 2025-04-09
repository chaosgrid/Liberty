#include "Freelancer-PCH.h"

PROC_DECLARE(0x564840, internal_564840, public_564840);
extern "C" NAKED register_t __cdecl internal_564840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2548]
        mov dword ptr ds : [public_67c1f0], eax
        ret 
        UNREACHABLE_TRAP(0x564840)
    }
}
