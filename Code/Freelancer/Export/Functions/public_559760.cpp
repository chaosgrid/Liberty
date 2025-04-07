#include "Freelancer-PCH.h"

PROC_DECLARE(0x559760, internal_559760, public_559760);
extern "C" NAKED register_t __cdecl internal_559760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e14d8]
        mov dword ptr ds : [public_679ae4], eax
        ret 
        UNREACHABLE_TRAP(0x559760)
    }
}
