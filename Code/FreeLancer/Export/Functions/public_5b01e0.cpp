#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b01e0, internal_5b01e0, public_5b01e0);
extern "C" NAKED register_t __cdecl internal_5b01e0()
{
    __asm
    {
        mov word ptr ds : [public_67ec7c], 3
        mov byte ptr ds : [public_67ec7e], 1
        ret 
        UNREACHABLE_TRAP(0x5b01e0)
    }
}
