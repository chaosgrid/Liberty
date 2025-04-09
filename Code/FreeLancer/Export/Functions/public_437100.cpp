#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437100, internal_437100, public_437100);
extern "C" NAKED register_t __cdecl internal_437100()
{
    __asm
    {
        mov word ptr ds : [public_6686ac], 3
        mov byte ptr ds : [public_6686ae], 1
        ret 
        UNREACHABLE_TRAP(0x437100)
    }
}
