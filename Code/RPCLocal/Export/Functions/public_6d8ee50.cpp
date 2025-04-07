#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ee50, internal_6d8ee50, public_6d8ee50);
extern "C" NAKED register_t __cdecl internal_6d8ee50()
{
    __asm
    {
        mov word ptr ds : [public_6dbbcec], 3
        mov byte ptr ds : [public_6dbbcee], 1
        ret 
        UNREACHABLE_TRAP(0x6d8ee50)
    }
}
