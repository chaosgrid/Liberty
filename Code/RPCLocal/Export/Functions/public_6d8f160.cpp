#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f160, internal_6d8f160, public_6d8f160);
extern "C" NAKED register_t __cdecl internal_6d8f160()
{
    __asm
    {
        mov word ptr ds : [public_6dbbd38], 3
        mov byte ptr ds : [public_6dbbd3a], 1
        ret 
        UNREACHABLE_TRAP(0x6d8f160)
    }
}
