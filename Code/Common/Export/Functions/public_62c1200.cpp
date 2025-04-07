#include "Common-PCH.h"

PROC_DECLARE(0x62c1200, internal_62c1200, public_62c1200);
extern "C" NAKED register_t __cdecl internal_62c1200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f3c4]
        mov dword ptr ds : [public_63fc4fc], eax
        ret 
        UNREACHABLE_TRAP(0x62c1200)
    }
}
