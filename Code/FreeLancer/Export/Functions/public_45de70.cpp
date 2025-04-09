#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45de70, internal_45de70, public_45de70);
extern "C" NAKED register_t __cdecl internal_45de70()
{
    __asm
    {
        mov word ptr ds : [public_66da3c], 2
        mov byte ptr ds : [public_66da3e], 1
        ret 
        UNREACHABLE_TRAP(0x45de70)
    }
}
