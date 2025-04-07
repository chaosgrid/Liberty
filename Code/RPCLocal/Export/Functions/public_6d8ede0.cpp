#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ede0, internal_6d8ede0, public_6d8ede0);
extern "C" NAKED register_t __cdecl internal_6d8ede0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbbcfc], ax
        mov byte ptr ds : [public_6dbbcfe], al
        ret 
        UNREACHABLE_TRAP(0x6d8ede0)
    }
}
