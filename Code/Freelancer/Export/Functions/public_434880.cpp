#include "Freelancer-PCH.h"

PROC_DECLARE(0x434880, internal_434880, public_434880);
extern "C" NAKED register_t __cdecl internal_434880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cad9c]
        mov dword ptr ds : [public_66865c], eax
        ret 
        UNREACHABLE_TRAP(0x434880)
    }
}
