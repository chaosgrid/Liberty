#include "Common-PCH.h"

PROC_DECLARE(0x627cdf0, internal_627cdf0, public_627cdf0);
extern "C" NAKED register_t __cdecl internal_627cdf0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x64]
        ret 4
        UNREACHABLE_TRAP(0x627cdf0)
    }
}
