#include "Common-PCH.h"

PROC_DECLARE(0x62a1200, internal_62a1200, public_62a1200);
extern "C" NAKED register_t __cdecl internal_62a1200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9d4]
        mov dword ptr ds : [public_63fc278], eax
        ret 
        UNREACHABLE_TRAP(0x62a1200)
    }
}
