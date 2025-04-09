#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564890, internal_564890, public_564890);
extern "C" NAKED register_t __cdecl internal_564890()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_67c1e0], ax
        mov byte ptr ds : [public_67c1e2], al
        ret 
        UNREACHABLE_TRAP(0x564890)
    }
}
