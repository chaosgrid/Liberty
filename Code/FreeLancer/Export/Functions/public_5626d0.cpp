#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5626d0, internal_5626d0, public_5626d0);
extern "C" NAKED register_t __cdecl internal_5626d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2074]
        mov dword ptr ds : [public_67a470], eax
        ret 
        UNREACHABLE_TRAP(0x5626d0)
    }
}
