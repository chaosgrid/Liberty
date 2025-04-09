#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e07e0, internal_4e07e0, public_4e07e0);
extern "C" NAKED register_t __cdecl internal_4e07e0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_674ae4], ax
        mov byte ptr ds : [public_674ae6], al
        ret 
        UNREACHABLE_TRAP(0x4e07e0)
    }
}
