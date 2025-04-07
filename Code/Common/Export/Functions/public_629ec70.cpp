#include "Common-PCH.h"

PROC_DECLARE(0x629ec70, internal_629ec70, public_629ec70);
extern "C" NAKED register_t __cdecl internal_629ec70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d91c]
        mov dword ptr ds : [public_63fc238], eax
        ret 
        UNREACHABLE_TRAP(0x629ec70)
    }
}
