#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453670, internal_453670, public_453670);
extern "C" NAKED register_t __cdecl internal_453670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd790]
        mov dword ptr ds : [public_66d284], eax
        ret 
        UNREACHABLE_TRAP(0x453670)
    }
}
