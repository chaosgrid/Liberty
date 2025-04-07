#include "Common-PCH.h"

PROC_DECLARE(0x62992a0, internal_62992a0, public_62992a0);
extern "C" NAKED register_t __cdecl internal_62992a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d2a8]
        mov dword ptr ds : [public_63fc188], eax
        ret 
        UNREACHABLE_TRAP(0x62992a0)
    }
}
