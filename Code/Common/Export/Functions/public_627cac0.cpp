#include "Common-PCH.h"

PROC_DECLARE(0x627cac0, internal_627cac0, public_627cac0);
extern "C" NAKED register_t __cdecl internal_627cac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b5b0]
        mov dword ptr ds : [public_63fc010], eax
        ret 
        UNREACHABLE_TRAP(0x627cac0)
    }
}
