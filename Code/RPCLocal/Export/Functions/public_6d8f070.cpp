#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f070, internal_6d8f070, public_6d8f070);
extern "C" NAKED register_t __cdecl internal_6d8f070()
{
    __asm
    {
        xor al, al
        mov byte ptr ds : [public_6dbbd18], al
        mov byte ptr ds : [public_6dbbd19], al
        ret 4
        UNREACHABLE_TRAP(0x6d8f070)
    }
}
