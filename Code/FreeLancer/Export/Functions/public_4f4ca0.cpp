#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4ca0);

PROC_DECLARE(0x4f4ca0, internal_4f4ca0, public_4f4ca0);
extern "C" NAKED register_t __cdecl internal_4f4ca0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x37C]
        ret 
        UNREACHABLE_TRAP(0x4f4ca0)
    }
}
