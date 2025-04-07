#include "Freelancer-PCH.h"

PROC_DECLARE(0x427890, internal_427890, public_427890);
extern "C" NAKED register_t __cdecl internal_427890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9cdc]
        mov dword ptr ds : [public_667c8c], eax
        ret 
        UNREACHABLE_TRAP(0x427890)
    }
}
