#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cc30, internal_6d8cc30, public_6d8cc30);
extern "C" NAKED register_t __cdecl internal_6d8cc30()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb9c], 3
        mov byte ptr ds : [public_6dbbb9e], 1
        ret 
        UNREACHABLE_TRAP(0x6d8cc30)
    }
}
