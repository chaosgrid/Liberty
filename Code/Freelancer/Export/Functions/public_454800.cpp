#include "Freelancer-PCH.h"

PROC_DECLARE(0x454800, internal_454800, public_454800);
extern "C" NAKED register_t __cdecl internal_454800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce050]
        mov dword ptr ds : [public_66d2f8], eax
        ret 
        UNREACHABLE_TRAP(0x454800)
    }
}
