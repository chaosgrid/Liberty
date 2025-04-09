#include "Freelancer-PCH.h"

PROC_DECLARE(0x434710, internal_434710, public_434710);
extern "C" NAKED register_t __cdecl internal_434710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cad98]
        mov dword ptr ds : [public_667e3c], eax
        ret 
        UNREACHABLE_TRAP(0x434710)
    }
}
