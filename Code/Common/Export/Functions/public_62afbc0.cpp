#include "Common-PCH.h"

PROC_DECLARE(0x62afbc0, internal_62afbc0, public_62afbc0);
extern "C" NAKED register_t __cdecl internal_62afbc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e54c]
        mov dword ptr ds : [public_63fc454], eax
        ret 
        UNREACHABLE_TRAP(0x62afbc0)
    }
}
