#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4312a0, internal_4312a0, public_4312a0);
extern "C" NAKED register_t __cdecl internal_4312a0()
{
    __asm
    {
        movsx eax, word ptr ds : [ecx+0x12]
        ret 
        UNREACHABLE_TRAP(0x4312a0)
    }
}
