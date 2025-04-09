#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b7400, internal_4b7400, public_4b7400);
extern "C" NAKED register_t __cdecl internal_4b7400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d56e4]
        mov dword ptr ds : [public_6722fc], eax
        ret 
        UNREACHABLE_TRAP(0x4b7400)
    }
}
