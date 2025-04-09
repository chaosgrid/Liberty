#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59f810, internal_59f810, public_59f810);
extern "C" NAKED register_t __cdecl internal_59f810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e28]
        mov dword ptr ds : [public_67dd44], eax
        ret 
        UNREACHABLE_TRAP(0x59f810)
    }
}
