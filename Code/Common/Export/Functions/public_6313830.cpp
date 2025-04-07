#include "Common-PCH.h"

PROC_DECLARE(0x6313830, internal_6313830, public_6313830);
extern "C" NAKED register_t __cdecl internal_6313830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37b0]
        mov dword ptr ds : [public_640133c], eax
        ret 
        UNREACHABLE_TRAP(0x6313830)
    }
}
