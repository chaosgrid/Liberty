#include "Freelancer-PCH.h"

PROC_DECLARE(0x451f40, internal_451f40, public_451f40);
extern "C" NAKED register_t __cdecl internal_451f40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd09c]
        mov dword ptr ds : [public_66d120], eax
        ret 
        UNREACHABLE_TRAP(0x451f40)
    }
}
