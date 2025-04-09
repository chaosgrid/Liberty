#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d120, internal_43d120, public_43d120);
extern "C" NAKED register_t __cdecl internal_43d120()
{
    __asm
    {
        mov dword ptr ds : [public_668774], offset public_5cb094
        ret 
        UNREACHABLE_TRAP(0x43d120)
    }
}
