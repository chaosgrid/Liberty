#include "Common-PCH.h"

PROC_DECLARE(0x62a2290, internal_62a2290, public_62a2290);
extern "C" NAKED register_t __cdecl internal_62a2290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639db88]
        mov dword ptr ds : [public_63fc284], eax
        ret 
        UNREACHABLE_TRAP(0x62a2290)
    }
}
