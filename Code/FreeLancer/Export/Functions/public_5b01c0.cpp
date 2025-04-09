#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b01c0, internal_5b01c0, public_5b01c0);
extern "C" NAKED register_t __cdecl internal_5b01c0()
{
    __asm
    {
        mov word ptr ds : [public_67ec80], 2
        mov byte ptr ds : [public_67ec82], 1
        ret 
        UNREACHABLE_TRAP(0x5b01c0)
    }
}
