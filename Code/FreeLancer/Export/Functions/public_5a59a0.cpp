#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a59a0, internal_5a59a0, public_5a59a0);
extern "C" NAKED register_t __cdecl internal_5a59a0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_67e798], ax
        mov byte ptr ds : [public_67e79a], al
        ret 
        UNREACHABLE_TRAP(0x5a59a0)
    }
}
