#include "Freelancer-PCH.h"

PROC_DECLARE(0x595330, internal_595330, public_595330);
extern "C" NAKED register_t __cdecl internal_595330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5538]
        mov dword ptr ds : [public_67d9f8], eax
        ret 
        UNREACHABLE_TRAP(0x595330)
    }
}
