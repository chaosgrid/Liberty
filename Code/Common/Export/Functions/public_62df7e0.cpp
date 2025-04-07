#include "Common-PCH.h"

PROC_DECLARE(0x62df7e0, internal_62df7e0, public_62df7e0);
extern "C" NAKED register_t __cdecl internal_62df7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0738]
        mov dword ptr ds : [public_63fca2c], eax
        ret 
        UNREACHABLE_TRAP(0x62df7e0)
    }
}
