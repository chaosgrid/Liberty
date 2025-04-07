#include "Freelancer-PCH.h"

PROC_DECLARE(0x411fe0, internal_411fe0, public_411fe0);
extern "C" NAKED register_t __cdecl internal_411fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6164fc]
        mov ecx, dword ptr ds : [public_616500]
        mov edx, dword ptr ds : [public_616504]
        mov dword ptr ds : [public_6164f0], eax
        mov dword ptr ds : [public_6164f4], ecx
        mov dword ptr ds : [public_6164f8], edx
        ret 
        UNREACHABLE_TRAP(0x411fe0)
    }
}
