#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bcf0);

PROC_DECLARE(0x40bcf0, internal_40bcf0, public_40bcf0);
extern "C" NAKED register_t __cdecl internal_40bcf0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBA8]
        ret 
        UNREACHABLE_TRAP(0x40bcf0)
    }
}
