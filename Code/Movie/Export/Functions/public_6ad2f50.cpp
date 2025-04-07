#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2fa6);

PROC_DECLARE(0x6ad2f50, internal_6ad2f50, public_6ad2f50);
extern "C" NAKED register_t __cdecl internal_6ad2f50()
{
    __asm
    {
        mov byte ptr ss : [ebp-0x90], 0xFE
        or ch, ch
        jne public_6ad2fa6
        fxch 
        UNREACHABLE_TRAP(0x6ad2f50)
    }
}
