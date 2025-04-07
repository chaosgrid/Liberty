#include "Freelancer-PCH.h"

PROC_DECLARE(0x559770, internal_559770, public_559770);
extern "C" NAKED register_t __cdecl internal_559770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e14dc]
        mov dword ptr ds : [public_679ae0], eax
        ret 
        UNREACHABLE_TRAP(0x559770)
    }
}
