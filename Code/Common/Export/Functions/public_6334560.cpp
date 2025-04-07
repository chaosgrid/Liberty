#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334560);

PROC_DECLARE(0x6334560, internal_6334560, public_6334560);
extern "C" NAKED register_t __cdecl internal_6334560()
{
    __asm
    {
        inc word ptr ds : [ecx]
        mov ax, word ptr ds : [ecx]
        ret 
        UNREACHABLE_TRAP(0x6334560)
    }
}
