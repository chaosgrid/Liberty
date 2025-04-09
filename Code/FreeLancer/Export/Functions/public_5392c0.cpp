#include "Freelancer-PCH.h"

PROC_DECLARE(0x5392c0, internal_5392c0, public_5392c0);
extern "C" NAKED register_t __cdecl internal_5392c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de75c]
        mov dword ptr ds : [public_6789c4], eax
        ret 
        UNREACHABLE_TRAP(0x5392c0)
    }
}
