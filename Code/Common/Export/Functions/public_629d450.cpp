#include "Common-PCH.h"

PROC_DECLARE(0x629d450, internal_629d450, public_629d450);
extern "C" NAKED register_t __cdecl internal_629d450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d804]
        mov dword ptr ds : [public_63fc224], eax
        ret 
        UNREACHABLE_TRAP(0x629d450)
    }
}
