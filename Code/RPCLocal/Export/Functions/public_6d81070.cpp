#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81070, internal_6d81070, public_6d81070);
extern "C" NAKED register_t __cdecl internal_6d81070()
{
    __asm
    {
        mov word ptr ds : [public_6dbb918], 0
        mov byte ptr ds : [public_6dbb91a], 1
        ret 
        UNREACHABLE_TRAP(0x6d81070)
    }
}
