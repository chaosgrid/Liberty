#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0200, internal_5b0200, public_5b0200);
extern "C" NAKED register_t __cdecl internal_5b0200()
{
    __asm
    {
        mov word ptr ds : [public_67ec78], 4
        mov byte ptr ds : [public_67ec7a], 1
        ret 
        UNREACHABLE_TRAP(0x5b0200)
    }
}
