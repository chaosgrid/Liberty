#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d100, internal_43d100, public_43d100);
extern "C" NAKED register_t __cdecl internal_43d100()
{
    __asm
    {
        mov word ptr ds : [public_66878c], 4
        mov byte ptr ds : [public_66878e], 1
        ret 
        UNREACHABLE_TRAP(0x43d100)
    }
}
