#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a59c0, internal_5a59c0, public_5a59c0);
extern "C" NAKED register_t __cdecl internal_5a59c0()
{
    __asm
    {
        mov word ptr ds : [public_67e794], 2
        mov byte ptr ds : [public_67e796], 1
        ret 
        UNREACHABLE_TRAP(0x5a59c0)
    }
}
