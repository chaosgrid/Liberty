#include "Common-PCH.h"

PROC_DECLARE(0x6302830, internal_6302830, public_6302830);
extern "C" NAKED register_t __cdecl internal_6302830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2654]
        mov dword ptr ds : [public_63fcc6c], eax
        ret 
        UNREACHABLE_TRAP(0x6302830)
    }
}
