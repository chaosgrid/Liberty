#include "Freelancer-PCH.h"

PROC_DECLARE(0x513420, internal_513420, public_513420);
extern "C" NAKED register_t __cdecl internal_513420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db754]
        mov dword ptr ds : [public_6751ec], eax
        ret 
        UNREACHABLE_TRAP(0x513420)
    }
}
