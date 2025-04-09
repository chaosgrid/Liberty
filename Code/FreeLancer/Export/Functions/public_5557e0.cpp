#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5557e0, internal_5557e0, public_5557e0);
extern "C" NAKED register_t __cdecl internal_5557e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e11fc]
        mov dword ptr ds : [public_679988], eax
        ret 
        UNREACHABLE_TRAP(0x5557e0)
    }
}
