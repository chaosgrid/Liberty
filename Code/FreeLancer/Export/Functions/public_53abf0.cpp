#include "Freelancer-PCH.h"

PROC_DECLARE(0x53abf0, internal_53abf0, public_53abf0);
extern "C" NAKED register_t __cdecl internal_53abf0()
{
    __asm
    {
        mov word ptr ds : [public_6789d4], 4
        mov byte ptr ds : [public_6789d6], 1
        ret 
        UNREACHABLE_TRAP(0x53abf0)
    }
}
