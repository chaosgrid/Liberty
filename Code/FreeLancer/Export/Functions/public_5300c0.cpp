#include "Freelancer-PCH.h"

PROC_DECLARE(0x5300c0, internal_5300c0, public_5300c0);
extern "C" NAKED register_t __cdecl internal_5300c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd40]
        mov dword ptr ds : [public_675510], eax
        ret 
        UNREACHABLE_TRAP(0x5300c0)
    }
}
