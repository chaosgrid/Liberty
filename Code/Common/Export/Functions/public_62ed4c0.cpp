#include "Common-PCH.h"

PROC_DECLARE(0x62ed4c0, internal_62ed4c0, public_62ed4c0);
extern "C" NAKED register_t __cdecl internal_62ed4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a080c]
        mov dword ptr ds : [public_63fca60], eax
        ret 
        UNREACHABLE_TRAP(0x62ed4c0)
    }
}
