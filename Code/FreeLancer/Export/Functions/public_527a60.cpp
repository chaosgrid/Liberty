#include "Freelancer-PCH.h"

PROC_DECLARE(0x527a60, internal_527a60, public_527a60);
extern "C" NAKED register_t __cdecl internal_527a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd078]
        mov dword ptr ds : [public_6753ec], eax
        ret 
        UNREACHABLE_TRAP(0x527a60)
    }
}
