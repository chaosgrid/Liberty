#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e0800, internal_4e0800, public_4e0800);
extern "C" NAKED register_t __cdecl internal_4e0800()
{
    __asm
    {
        mov word ptr ds : [public_674ae0], 2
        mov byte ptr ds : [public_674ae2], 1
        ret 
        UNREACHABLE_TRAP(0x4e0800)
    }
}
