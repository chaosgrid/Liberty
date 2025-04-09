#include "Freelancer-PCH.h"

PROC_DECLARE(0x5475a0, internal_5475a0, public_5475a0);
extern "C" NAKED register_t __cdecl internal_5475a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0268]
        mov dword ptr ds : [public_678b7c], eax
        ret 
        UNREACHABLE_TRAP(0x5475a0)
    }
}
