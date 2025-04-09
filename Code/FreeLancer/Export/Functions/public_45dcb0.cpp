#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45dcb0);

PROC_DECLARE(0x45dcb0, internal_45dcb0, public_45dcb0);
extern "C" NAKED register_t __cdecl internal_45dcb0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x52C], 1
        ret 
        UNREACHABLE_TRAP(0x45dcb0)
    }
}
