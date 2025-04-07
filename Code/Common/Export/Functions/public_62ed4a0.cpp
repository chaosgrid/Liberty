#include "Common-PCH.h"

PROC_DECLARE(0x62ed4a0, internal_62ed4a0, public_62ed4a0);
extern "C" NAKED register_t __cdecl internal_62ed4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0808]
        mov dword ptr ds : [public_63fca68], eax
        ret 
        UNREACHABLE_TRAP(0x62ed4a0)
    }
}
