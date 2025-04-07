#include "Freelancer-PCH.h"

PROC_DECLARE(0x42d8e0, internal_42d8e0, public_42d8e0);
extern "C" NAKED register_t __cdecl internal_42d8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca860]
        mov dword ptr ds : [public_667e04], eax
        ret 
        UNREACHABLE_TRAP(0x42d8e0)
    }
}
