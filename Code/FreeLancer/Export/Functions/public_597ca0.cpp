#include "Freelancer-PCH.h"

PROC_DECLARE(0x597ca0, internal_597ca0, public_597ca0);
extern "C" NAKED register_t __cdecl internal_597ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5738]
        mov dword ptr ds : [public_67da34], eax
        ret 
        UNREACHABLE_TRAP(0x597ca0)
    }
}
