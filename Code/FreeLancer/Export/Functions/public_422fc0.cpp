#include "Freelancer-PCH.h"

PROC_DECLARE(0x422fc0, internal_422fc0, public_422fc0);
extern "C" NAKED register_t __cdecl internal_422fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97f0]
        mov dword ptr ds : [public_6679d0], eax
        ret 
        UNREACHABLE_TRAP(0x422fc0)
    }
}
