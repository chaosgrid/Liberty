#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d86a50, internal_6d86a50, public_6d86a50);
extern "C" NAKED register_t __cdecl internal_6d86a50()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb08], 4
        mov byte ptr ds : [public_6dbbb0a], 1
        ret 
        UNREACHABLE_TRAP(0x6d86a50)
    }
}
