#include "Common-PCH.h"

PROC_DECLARE(0x629fee0, internal_629fee0, public_629fee0);
extern "C" NAKED register_t __cdecl internal_629fee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9b8]
        mov dword ptr ds : [public_63fc258], eax
        ret 
        UNREACHABLE_TRAP(0x629fee0)
    }
}
