#include "Freelancer-PCH.h"

PROC_DECLARE(0x4374b0, internal_4374b0, public_4374b0);
extern "C" NAKED register_t __cdecl internal_4374b0()
{
    __asm
    {
        mov word ptr ds : [public_6686d8], 2
        mov byte ptr ds : [public_6686da], 1
        ret 
        UNREACHABLE_TRAP(0x4374b0)
    }
}
