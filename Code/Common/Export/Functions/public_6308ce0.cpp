#include "Common-PCH.h"

PROC_DECLARE(0x6308ce0, internal_6308ce0, public_6308ce0);
extern "C" NAKED register_t __cdecl internal_6308ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a31d0]
        mov dword ptr ds : [public_63fcee0], eax
        ret 
        UNREACHABLE_TRAP(0x6308ce0)
    }
}
