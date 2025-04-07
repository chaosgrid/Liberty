#include "Freelancer-PCH.h"

PROC_DECLARE(0x422fb0, internal_422fb0, public_422fb0);
extern "C" NAKED register_t __cdecl internal_422fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97f0]
        mov dword ptr ds : [public_6679d4], eax
        ret 
        UNREACHABLE_TRAP(0x422fb0)
    }
}
