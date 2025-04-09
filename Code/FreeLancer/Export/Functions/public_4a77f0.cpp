#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a77f0, internal_4a77f0, public_4a77f0);
extern "C" NAKED register_t __cdecl internal_4a77f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d477c]
        mov dword ptr ds : [public_6721b4], eax
        ret 
        UNREACHABLE_TRAP(0x4a77f0)
    }
}
