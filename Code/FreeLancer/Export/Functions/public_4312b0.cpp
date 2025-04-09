#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4312b0, internal_4312b0, public_4312b0);
extern "C" NAKED register_t __cdecl internal_4312b0()
{
    __asm
    {
        movsx eax, byte ptr ds : [ecx+0x11]
        ret 
        UNREACHABLE_TRAP(0x4312b0)
    }
}
