#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b3500, internal_5b3500, public_5b3500);
extern "C" NAKED register_t __cdecl internal_5b3500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6df8]
        mov dword ptr ds : [public_67ed2c], eax
        ret 
        UNREACHABLE_TRAP(0x5b3500)
    }
}
