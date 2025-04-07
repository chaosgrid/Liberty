#include "Common-PCH.h"

PROC_DECLARE(0x629cfd0, internal_629cfd0, public_629cfd0);
extern "C" NAKED register_t __cdecl internal_629cfd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d708]
        mov dword ptr ds : [public_63fc210], eax
        ret 
        UNREACHABLE_TRAP(0x629cfd0)
    }
}
