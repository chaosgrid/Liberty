#include "Common-PCH.h"

PROC_DECLARE(0x6272dd0, internal_6272dd0, public_6272dd0);
extern "C" NAKED register_t __cdecl internal_6272dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639a09c]
        mov dword ptr ds : [public_63fbbbc], eax
        ret 
        UNREACHABLE_TRAP(0x6272dd0)
    }
}
