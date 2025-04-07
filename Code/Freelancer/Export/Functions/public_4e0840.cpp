#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e0840, internal_4e0840, public_4e0840);
extern "C" NAKED register_t __cdecl internal_4e0840()
{
    __asm
    {
        mov word ptr ds : [public_674ad8], 4
        mov byte ptr ds : [public_674ada], 1
        ret 
        UNREACHABLE_TRAP(0x4e0840)
    }
}
