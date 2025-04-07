#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d88300, internal_6d88300, public_6d88300);
extern "C" NAKED register_t __cdecl internal_6d88300()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb7c], 0
        mov byte ptr ds : [public_6dbbb7e], 1
        ret 
        UNREACHABLE_TRAP(0x6d88300)
    }
}
