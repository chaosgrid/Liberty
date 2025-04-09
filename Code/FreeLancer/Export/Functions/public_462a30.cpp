#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_462a30);

PROC_DECLARE(0x462a30, internal_462a30, public_462a30);
extern "C" NAKED register_t __cdecl internal_462a30()
{
    __asm
    {
        or byte ptr ds : [ecx+0x6C], 3
        ret 
        UNREACHABLE_TRAP(0x462a30)
    }
}
