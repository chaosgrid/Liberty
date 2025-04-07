#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cbc0, internal_6d8cbc0, public_6d8cbc0);
extern "C" NAKED register_t __cdecl internal_6d8cbc0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbbb94], ax
        mov byte ptr ds : [public_6dbbb96], al
        ret 
        UNREACHABLE_TRAP(0x6d8cbc0)
    }
}
