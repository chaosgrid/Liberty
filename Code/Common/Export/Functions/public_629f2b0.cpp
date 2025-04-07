#include "Common-PCH.h"

PROC_DECLARE(0x629f2b0, internal_629f2b0, public_629f2b0);
extern "C" NAKED register_t __cdecl internal_629f2b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9b4]
        mov dword ptr ds : [public_63fc240], eax
        ret 
        UNREACHABLE_TRAP(0x629f2b0)
    }
}
