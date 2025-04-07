#include "Common-PCH.h"

PROC_DECLARE(0x627f9a0, internal_627f9a0, public_627f9a0);
extern "C" NAKED register_t __cdecl internal_627f9a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b6f0]
        mov dword ptr ds : [public_63fc05c], eax
        ret 
        UNREACHABLE_TRAP(0x627f9a0)
    }
}
