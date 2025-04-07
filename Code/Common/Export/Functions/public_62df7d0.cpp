#include "Common-PCH.h"

PROC_DECLARE(0x62df7d0, internal_62df7d0, public_62df7d0);
extern "C" NAKED register_t __cdecl internal_62df7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0734]
        mov dword ptr ds : [public_63fca30], eax
        ret 
        UNREACHABLE_TRAP(0x62df7d0)
    }
}
