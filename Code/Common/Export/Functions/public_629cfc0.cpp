#include "Common-PCH.h"

PROC_DECLARE(0x629cfc0, internal_629cfc0, public_629cfc0);
extern "C" NAKED register_t __cdecl internal_629cfc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d704]
        mov dword ptr ds : [public_63fc214], eax
        ret 
        UNREACHABLE_TRAP(0x629cfc0)
    }
}
