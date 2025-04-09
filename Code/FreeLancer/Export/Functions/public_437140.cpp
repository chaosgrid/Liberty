#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437140, internal_437140, public_437140);
extern "C" NAKED register_t __cdecl internal_437140()
{
    __asm
    {
        mov dword ptr ds : [public_6686a0], offset public_5cae24
        ret 
        UNREACHABLE_TRAP(0x437140)
    }
}
