#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d88380, internal_6d88380, public_6d88380);
extern "C" NAKED register_t __cdecl internal_6d88380()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb78], 4
        mov byte ptr ds : [public_6dbbb7a], 1
        ret 
        UNREACHABLE_TRAP(0x6d88380)
    }
}
