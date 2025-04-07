#include "Common-PCH.h"

PROC_DECLARE(0x629d460, internal_629d460, public_629d460);
extern "C" NAKED register_t __cdecl internal_629d460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d808]
        mov dword ptr ds : [public_63fc220], eax
        ret 
        UNREACHABLE_TRAP(0x629d460)
    }
}
