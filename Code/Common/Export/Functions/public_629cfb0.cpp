#include "Common-PCH.h"

PROC_DECLARE(0x629cfb0, internal_629cfb0, public_629cfb0);
extern "C" NAKED register_t __cdecl internal_629cfb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d704]
        mov dword ptr ds : [public_63fc218], eax
        ret 
        UNREACHABLE_TRAP(0x629cfb0)
    }
}
