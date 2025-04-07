#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d88340, internal_6d88340, public_6d88340);
extern "C" NAKED register_t __cdecl internal_6d88340()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb80], 2
        mov byte ptr ds : [public_6dbbb82], 1
        ret 
        UNREACHABLE_TRAP(0x6d88340)
    }
}
