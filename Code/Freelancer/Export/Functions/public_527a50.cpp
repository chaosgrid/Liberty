#include "Freelancer-PCH.h"

PROC_DECLARE(0x527a50, internal_527a50, public_527a50);
extern "C" NAKED register_t __cdecl internal_527a50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd074]
        mov dword ptr ds : [public_6753f0], eax
        ret 
        UNREACHABLE_TRAP(0x527a50)
    }
}
