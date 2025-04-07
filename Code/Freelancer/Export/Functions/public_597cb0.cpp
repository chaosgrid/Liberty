#include "Freelancer-PCH.h"

PROC_DECLARE(0x597cb0, internal_597cb0, public_597cb0);
extern "C" NAKED register_t __cdecl internal_597cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5738]
        mov dword ptr ds : [public_67da30], eax
        ret 
        UNREACHABLE_TRAP(0x597cb0)
    }
}
