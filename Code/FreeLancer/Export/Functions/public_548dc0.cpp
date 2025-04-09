#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548dc0, internal_548dc0, public_548dc0);
extern "C" NAKED register_t __cdecl internal_548dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0538]
        mov dword ptr ds : [public_679764], eax
        ret 
        UNREACHABLE_TRAP(0x548dc0)
    }
}
