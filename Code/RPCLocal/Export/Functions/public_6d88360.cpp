#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d88360, internal_6d88360, public_6d88360);
extern "C" NAKED register_t __cdecl internal_6d88360()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb74], 3
        mov byte ptr ds : [public_6dbbb76], 1
        ret 
        UNREACHABLE_TRAP(0x6d88360)
    }
}
