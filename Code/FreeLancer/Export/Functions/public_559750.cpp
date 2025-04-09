#include "Freelancer-PCH.h"

PROC_DECLARE(0x559750, internal_559750, public_559750);
extern "C" NAKED register_t __cdecl internal_559750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e14d8]
        mov dword ptr ds : [public_679ae8], eax
        ret 
        UNREACHABLE_TRAP(0x559750)
    }
}
