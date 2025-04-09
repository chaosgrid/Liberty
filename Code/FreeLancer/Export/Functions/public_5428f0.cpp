#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5428f0, internal_5428f0, public_5428f0);
extern "C" NAKED register_t __cdecl internal_5428f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dfb20]
        mov dword ptr ds : [public_678b60], eax
        ret 
        UNREACHABLE_TRAP(0x5428f0)
    }
}
