#include "Freelancer-PCH.h"

PROC_DECLARE(0x458f90, internal_458f90, public_458f90);
extern "C" NAKED register_t __cdecl internal_458f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7b8]
        mov dword ptr ds : [public_66d324], eax
        ret 
        UNREACHABLE_TRAP(0x458f90)
    }
}
