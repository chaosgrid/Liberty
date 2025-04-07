#include "Common-PCH.h"

PROC_DECLARE(0x62c1210, internal_62c1210, public_62c1210);
extern "C" NAKED register_t __cdecl internal_62c1210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f3c8]
        mov dword ptr ds : [public_63fc4f8], eax
        ret 
        UNREACHABLE_TRAP(0x62c1210)
    }
}
