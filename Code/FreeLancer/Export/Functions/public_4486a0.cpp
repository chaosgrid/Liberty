#include "Freelancer-PCH.h"

PROC_DECLARE(0x4486a0, internal_4486a0, public_4486a0);
extern "C" NAKED register_t __cdecl internal_4486a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbe70]
        mov dword ptr ds : [public_668aa8], eax
        ret 
        UNREACHABLE_TRAP(0x4486a0)
    }
}
