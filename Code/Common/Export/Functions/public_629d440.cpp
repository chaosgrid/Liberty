#include "Common-PCH.h"

PROC_DECLARE(0x629d440, internal_629d440, public_629d440);
extern "C" NAKED register_t __cdecl internal_629d440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d804]
        mov dword ptr ds : [public_63fc228], eax
        ret 
        UNREACHABLE_TRAP(0x629d440)
    }
}
