#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f140, internal_6d8f140, public_6d8f140);
extern "C" NAKED register_t __cdecl internal_6d8f140()
{
    __asm
    {
        mov word ptr ds : [public_6dbbd3c], 2
        mov byte ptr ds : [public_6dbbd3e], 1
        ret 
        UNREACHABLE_TRAP(0x6d8f140)
    }
}
