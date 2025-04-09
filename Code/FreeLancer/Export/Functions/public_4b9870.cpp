#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b9870, internal_4b9870, public_4b9870);
extern "C" NAKED register_t __cdecl internal_4b9870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d59f0]
        mov dword ptr ds : [public_6723f0], eax
        ret 
        UNREACHABLE_TRAP(0x4b9870)
    }
}
