#include "Common-PCH.h"

PROC_DECLARE(0x627cdd0, internal_627cdd0, public_627cdd0);
extern "C" NAKED register_t __cdecl internal_627cdd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        sub esp, 0xC
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+0x64]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x627cdd0)
    }
}
