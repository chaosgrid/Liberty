#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f69c0);

PROC_DECLARE(0x65f69c0, internal_65f69c0, public_65f69c0);
extern "C" NAKED register_t __cdecl internal_65f69c0()
{
    __asm
    {
        or byte ptr ds : [ecx+0x30], 2
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x65f69c0)
    }
}
