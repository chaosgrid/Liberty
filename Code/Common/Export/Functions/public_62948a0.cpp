#include "Common-PCH.h"

PROC_DECLARE(0x62948a0, internal_62948a0, public_62948a0);
extern "C" NAKED register_t __cdecl internal_62948a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639c9fc]
        mov dword ptr ds : [public_63fc118], eax
        ret 
        UNREACHABLE_TRAP(0x62948a0)
    }
}
