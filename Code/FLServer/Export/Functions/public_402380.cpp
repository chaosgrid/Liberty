#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402380);

PROC_DECLARE(0x402380, internal_402380, public_402380);
extern "C" NAKED register_t __cdecl internal_402380()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x9A9]
        ret 
        UNREACHABLE_TRAP(0x402380)
    }
}
