#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d882f0, internal_6d882f0, public_6d882f0);
extern "C" NAKED register_t __cdecl internal_6d882f0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbbb6c], ax
        mov byte ptr ds : [public_6dbbb6e], al
        ret 
        UNREACHABLE_TRAP(0x6d882f0)
    }
}
