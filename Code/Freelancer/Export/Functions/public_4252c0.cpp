#include "Freelancer-PCH.h"

PROC_DECLARE(0x4252c0, internal_4252c0, public_4252c0);
extern "C" NAKED register_t __cdecl internal_4252c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9958]
        mov dword ptr ds : [public_667a00], eax
        ret 
        UNREACHABLE_TRAP(0x4252c0)
    }
}
