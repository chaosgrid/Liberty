#include "Freelancer-PCH.h"

PROC_DECLARE(0x4307a0, internal_4307a0, public_4307a0);
extern "C" NAKED register_t __cdecl internal_4307a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cab40]
        mov dword ptr ds : [public_667e30], eax
        ret 
        UNREACHABLE_TRAP(0x4307a0)
    }
}
