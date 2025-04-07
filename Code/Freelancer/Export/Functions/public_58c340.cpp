#include "Freelancer-PCH.h"

PROC_DECLARE(0x58c340, internal_58c340, public_58c340);
extern "C" NAKED register_t __cdecl internal_58c340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50ec]
        mov dword ptr ds : [public_67d958], eax
        ret 
        UNREACHABLE_TRAP(0x58c340)
    }
}
