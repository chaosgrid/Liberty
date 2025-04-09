#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4370a0, internal_4370a0, public_4370a0);
extern "C" NAKED register_t __cdecl internal_4370a0()
{
    __asm
    {
        mov word ptr ds : [public_6686b8], 0
        mov byte ptr ds : [public_6686ba], 1
        ret 
        UNREACHABLE_TRAP(0x4370a0)
    }
}
