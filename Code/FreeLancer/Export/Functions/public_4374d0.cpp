#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4374d0, internal_4374d0, public_4374d0);
extern "C" NAKED register_t __cdecl internal_4374d0()
{
    __asm
    {
        mov word ptr ds : [public_6686d4], 3
        mov byte ptr ds : [public_6686d6], 1
        ret 
        UNREACHABLE_TRAP(0x4374d0)
    }
}
