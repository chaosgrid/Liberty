#include "Freelancer-PCH.h"

PROC_DECLARE(0x5835a0, internal_5835a0, public_5835a0);
extern "C" NAKED register_t __cdecl internal_5835a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4bb4]
        mov dword ptr ds : [public_67c4f8], eax
        ret 
        UNREACHABLE_TRAP(0x5835a0)
    }
}
