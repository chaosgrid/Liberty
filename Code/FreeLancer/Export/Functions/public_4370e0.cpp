#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4370e0, internal_4370e0, public_4370e0);
extern "C" NAKED register_t __cdecl internal_4370e0()
{
    __asm
    {
        mov word ptr ds : [public_6686b0], 2
        mov byte ptr ds : [public_6686b2], 1
        ret 
        UNREACHABLE_TRAP(0x4370e0)
    }
}
