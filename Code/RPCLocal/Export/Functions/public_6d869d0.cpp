#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d869d0, internal_6d869d0, public_6d869d0);
extern "C" NAKED register_t __cdecl internal_6d869d0()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb50], 0
        mov byte ptr ds : [public_6dbbb52], 1
        ret 
        UNREACHABLE_TRAP(0x6d869d0)
    }
}
