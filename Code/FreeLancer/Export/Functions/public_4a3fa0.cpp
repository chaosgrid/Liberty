#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a3fa0, internal_4a3fa0, public_4a3fa0);
extern "C" NAKED register_t __cdecl internal_4a3fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d3fa4]
        mov dword ptr ds : [public_6720fc], eax
        ret 
        UNREACHABLE_TRAP(0x4a3fa0)
    }
}
