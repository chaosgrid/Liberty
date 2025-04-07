#include "Common-PCH.h"

PROC_DECLARE(0x62de1f0, internal_62de1f0, public_62de1f0);
extern "C" NAKED register_t __cdecl internal_62de1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05d4]
        mov dword ptr ds : [public_63fca0c], eax
        ret 
        UNREACHABLE_TRAP(0x62de1f0)
    }
}
