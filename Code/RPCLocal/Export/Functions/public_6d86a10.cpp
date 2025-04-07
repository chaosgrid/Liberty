#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d86a10, internal_6d86a10, public_6d86a10);
extern "C" NAKED register_t __cdecl internal_6d86a10()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb54], 2
        mov byte ptr ds : [public_6dbbb56], 1
        ret 
        UNREACHABLE_TRAP(0x6d86a10)
    }
}
