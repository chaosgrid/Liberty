#include "Freelancer-PCH.h"

PROC_DECLARE(0x556250, internal_556250, public_556250);
extern "C" NAKED register_t __cdecl internal_556250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1290]
        mov dword ptr ds : [public_6799b8], eax
        ret 
        UNREACHABLE_TRAP(0x556250)
    }
}
