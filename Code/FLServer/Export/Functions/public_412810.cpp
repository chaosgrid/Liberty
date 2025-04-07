#include "FLServer-PCH.h"

PROC_DECLARE(0x412810, internal_412810, public_412810);
extern "C" NAKED register_t __cdecl internal_412810()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_428c30], ax
        mov byte ptr ds : [public_428c32], al
        ret 
        UNREACHABLE_TRAP(0x412810)
    }
}
