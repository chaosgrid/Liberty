#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42adf0);

PROC_DECLARE(0x42adf0, internal_42adf0, public_42adf0);
extern "C" NAKED register_t __cdecl internal_42adf0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x42adf0)
    }
}
