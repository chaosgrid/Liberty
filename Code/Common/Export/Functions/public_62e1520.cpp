#include "Common-PCH.h"

PROC_DECLARE(0x62e1520, internal_62e1520, public_62e1520);
extern "C" NAKED register_t __cdecl internal_62e1520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a075c]
        mov dword ptr ds : [public_63fca3c], eax
        ret 
        UNREACHABLE_TRAP(0x62e1520)
    }
}
