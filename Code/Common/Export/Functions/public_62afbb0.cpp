#include "Common-PCH.h"

PROC_DECLARE(0x62afbb0, internal_62afbb0, public_62afbb0);
extern "C" NAKED register_t __cdecl internal_62afbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e548]
        mov dword ptr ds : [public_63fc458], eax
        ret 
        UNREACHABLE_TRAP(0x62afbb0)
    }
}
