#include "Freelancer-PCH.h"

PROC_DECLARE(0x5319a0, internal_5319a0, public_5319a0);
extern "C" NAKED register_t __cdecl internal_5319a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de0e4]
        mov dword ptr ds : [public_67552c], eax
        ret 
        UNREACHABLE_TRAP(0x5319a0)
    }
}
