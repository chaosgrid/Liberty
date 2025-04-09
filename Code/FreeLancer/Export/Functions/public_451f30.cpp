#include "Freelancer-PCH.h"

PROC_DECLARE(0x451f30, internal_451f30, public_451f30);
extern "C" NAKED register_t __cdecl internal_451f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd098]
        mov dword ptr ds : [public_66d124], eax
        ret 
        UNREACHABLE_TRAP(0x451f30)
    }
}
