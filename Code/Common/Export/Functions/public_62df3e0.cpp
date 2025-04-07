#include "Common-PCH.h"

PROC_DECLARE(0x62df3e0, internal_62df3e0, public_62df3e0);
extern "C" NAKED register_t __cdecl internal_62df3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0624]
        mov dword ptr ds : [public_63fca28], eax
        ret 
        UNREACHABLE_TRAP(0x62df3e0)
    }
}
