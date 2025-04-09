#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fd8d0, internal_4fd8d0, public_4fd8d0);
extern "C" NAKED register_t __cdecl internal_4fd8d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da3ec]
        mov dword ptr ds : [public_674f8c], eax
        ret 
        UNREACHABLE_TRAP(0x4fd8d0)
    }
}
