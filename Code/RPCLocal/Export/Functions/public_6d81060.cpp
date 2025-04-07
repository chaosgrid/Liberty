#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81060, internal_6d81060, public_6d81060);
extern "C" NAKED register_t __cdecl internal_6d81060()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbb900], ax
        mov byte ptr ds : [public_6dbb902], al
        ret 
        UNREACHABLE_TRAP(0x6d81060)
    }
}
