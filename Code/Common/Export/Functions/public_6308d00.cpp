#include "Common-PCH.h"

PROC_DECLARE(0x6308d00, internal_6308d00, public_6308d00);
extern "C" NAKED register_t __cdecl internal_6308d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a31d4]
        mov dword ptr ds : [public_63fced8], eax
        ret 
        UNREACHABLE_TRAP(0x6308d00)
    }
}
