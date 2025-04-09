#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503380);

PROC_DECLARE(0x503380, internal_503380, public_503380);
extern "C" NAKED register_t __cdecl internal_503380()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x18], 1
        ret 
        UNREACHABLE_TRAP(0x503380)
    }
}
