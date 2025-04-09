#include "FreeLancer-PCH.h"

PROC_DECLARE(0x471730, internal_471730, public_471730);
extern "C" NAKED register_t __cdecl internal_471730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0334]
        mov dword ptr ds : [public_66db34], eax
        ret 
        UNREACHABLE_TRAP(0x471730)
    }
}
