#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023a0);

PROC_DECLARE(0x4023a0, internal_4023a0, public_4023a0);
extern "C" NAKED register_t __cdecl internal_4023a0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x9A8]
        ret 
        UNREACHABLE_TRAP(0x4023a0)
    }
}
