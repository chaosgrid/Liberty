#include "Common-PCH.h"

PROC_DECLARE(0x62959c0, internal_62959c0, public_62959c0);
extern "C" NAKED register_t __cdecl internal_62959c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce30]
        mov dword ptr ds : [public_63fc150], eax
        ret 
        UNREACHABLE_TRAP(0x62959c0)
    }
}
