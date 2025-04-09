#include "Freelancer-PCH.h"

PROC_DECLARE(0x4486c0, internal_4486c0, public_4486c0);
extern "C" NAKED register_t __cdecl internal_4486c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbe74]
        mov dword ptr ds : [public_668aa0], eax
        ret 
        UNREACHABLE_TRAP(0x4486c0)
    }
}
