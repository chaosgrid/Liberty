#include "Common-PCH.h"

PROC_DECLARE(0x629ff00, internal_629ff00, public_629ff00);
extern "C" NAKED register_t __cdecl internal_629ff00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9bc]
        mov dword ptr ds : [public_63fc250], eax
        ret 
        UNREACHABLE_TRAP(0x629ff00)
    }
}
