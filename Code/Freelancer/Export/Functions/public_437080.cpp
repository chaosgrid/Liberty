#include "Freelancer-PCH.h"

PROC_DECLARE(0x437080, internal_437080, public_437080);
extern "C" NAKED register_t __cdecl internal_437080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cae14]
        mov dword ptr ds : [public_6686c0], eax
        ret 
        UNREACHABLE_TRAP(0x437080)
    }
}
