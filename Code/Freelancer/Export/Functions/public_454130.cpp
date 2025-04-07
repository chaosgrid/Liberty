#include "Freelancer-PCH.h"

PROC_DECLARE(0x454130, internal_454130, public_454130);
extern "C" NAKED register_t __cdecl internal_454130()
{
    __asm
    {
        lea eax, ds:[ecx+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x454130)
    }
}
