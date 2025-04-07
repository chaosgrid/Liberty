#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0f0, internal_6d8f0f0, public_6d8f0f0);
extern "C" NAKED register_t __cdecl internal_6d8f0f0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbbd48], ax
        mov byte ptr ds : [public_6dbbd4a], al
        ret 
        UNREACHABLE_TRAP(0x6d8f0f0)
    }
}
