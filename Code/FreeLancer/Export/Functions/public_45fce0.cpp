#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fce0, internal_45fce0, public_45fce0);
extern "C" NAKED register_t __cdecl internal_45fce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d4c4]
        mov dword ptr ds : [public_66d4c0], eax
        ret 
        UNREACHABLE_TRAP(0x45fce0)
    }
}
