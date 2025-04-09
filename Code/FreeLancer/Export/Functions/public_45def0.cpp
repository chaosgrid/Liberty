#include "Freelancer-PCH.h"

PROC_DECLARE(0x45def0, internal_45def0, public_45def0);
extern "C" NAKED register_t __cdecl internal_45def0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da30]
        mov dword ptr ds : [public_66da2c], eax
        ret 
        UNREACHABLE_TRAP(0x45def0)
    }
}
