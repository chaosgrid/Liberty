#include "Common-PCH.h"

PROC_DECLARE(0x63323f0, internal_63323f0, public_63323f0);
extern "C" NAKED register_t __cdecl internal_63323f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4958]
        mov dword ptr ds : [public_640a75c], eax
        ret 
        UNREACHABLE_TRAP(0x63323f0)
    }
}
