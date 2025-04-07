#include "Common-PCH.h"

PROC_DECLARE(0x62afba0, internal_62afba0, public_62afba0);
extern "C" NAKED register_t __cdecl internal_62afba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e548]
        mov dword ptr ds : [public_63fc45c], eax
        ret 
        UNREACHABLE_TRAP(0x62afba0)
    }
}
