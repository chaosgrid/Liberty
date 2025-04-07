#include "Freelancer-PCH.h"

PROC_DECLARE(0x44d290, internal_44d290, public_44d290);
extern "C" NAKED register_t __cdecl internal_44d290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc074]
        mov dword ptr ds : [public_668adc], eax
        ret 
        UNREACHABLE_TRAP(0x44d290)
    }
}
