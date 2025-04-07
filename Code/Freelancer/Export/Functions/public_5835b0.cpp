#include "Freelancer-PCH.h"

PROC_DECLARE(0x5835b0, internal_5835b0, public_5835b0);
extern "C" NAKED register_t __cdecl internal_5835b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4bb8]
        mov dword ptr ds : [public_67c4f4], eax
        ret 
        UNREACHABLE_TRAP(0x5835b0)
    }
}
