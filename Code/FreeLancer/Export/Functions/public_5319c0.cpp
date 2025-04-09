#include "Freelancer-PCH.h"

PROC_DECLARE(0x5319c0, internal_5319c0, public_5319c0);
extern "C" NAKED register_t __cdecl internal_5319c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de0e8]
        mov dword ptr ds : [public_675524], eax
        ret 
        UNREACHABLE_TRAP(0x5319c0)
    }
}
