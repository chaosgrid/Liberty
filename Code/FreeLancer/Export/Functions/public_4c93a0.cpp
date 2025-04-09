#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c93a0, internal_4c93a0, public_4c93a0);
extern "C" NAKED register_t __cdecl internal_4c93a0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0xDC], 0
        ret 4
        UNREACHABLE_TRAP(0x4c93a0)
    }
}
