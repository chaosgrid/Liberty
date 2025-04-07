#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f180, internal_6d8f180, public_6d8f180);
extern "C" NAKED register_t __cdecl internal_6d8f180()
{
    __asm
    {
        mov word ptr ds : [public_6dbbd34], 4
        mov byte ptr ds : [public_6dbbd36], 1
        ret 
        UNREACHABLE_TRAP(0x6d8f180)
    }
}
