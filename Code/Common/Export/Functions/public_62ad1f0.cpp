#include "Common-PCH.h"

PROC_DECLARE(0x62ad1f0, internal_62ad1f0, public_62ad1f0);
extern "C" NAKED register_t __cdecl internal_62ad1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e510]
        mov dword ptr ds : [public_63fc320], eax
        ret 
        UNREACHABLE_TRAP(0x62ad1f0)
    }
}
