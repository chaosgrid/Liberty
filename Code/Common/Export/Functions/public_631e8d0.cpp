#include "Common-PCH.h"

PROC_DECLARE(0x631e8d0, internal_631e8d0, public_631e8d0);
extern "C" NAKED register_t __cdecl internal_631e8d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401910]
        neg eax
        sbb eax, eax
        and eax, offset public_6401900
        ret 
        UNREACHABLE_TRAP(0x631e8d0)
    }
}
