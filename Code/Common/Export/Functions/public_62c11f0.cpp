#include "Common-PCH.h"

PROC_DECLARE(0x62c11f0, internal_62c11f0, public_62c11f0);
extern "C" NAKED register_t __cdecl internal_62c11f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f3c4]
        mov dword ptr ds : [public_63fc500], eax
        ret 
        UNREACHABLE_TRAP(0x62c11f0)
    }
}
