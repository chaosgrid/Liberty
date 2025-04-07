#include "Freelancer-PCH.h"

PROC_DECLARE(0x566070, internal_566070, public_566070);
extern "C" NAKED register_t __cdecl internal_566070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edx+0x2C], ecx
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x566070)
    }
}
