#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e07c0, internal_4e07c0, public_4e07c0);
extern "C" NAKED register_t __cdecl internal_4e07c0()
{
    __asm
    {
        mov word ptr ds : [public_674ae8], 0
        mov byte ptr ds : [public_674aea], 1
        ret 
        UNREACHABLE_TRAP(0x4e07c0)
    }
}
