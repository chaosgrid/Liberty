#include "Freelancer-PCH.h"

PROC_DECLARE(0x434700, internal_434700, public_434700);
extern "C" NAKED register_t __cdecl internal_434700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cad94]
        mov dword ptr ds : [public_667e40], eax
        ret 
        UNREACHABLE_TRAP(0x434700)
    }
}
