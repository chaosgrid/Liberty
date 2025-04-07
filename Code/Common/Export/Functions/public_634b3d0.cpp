#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b3d0);

PROC_DECLARE(0x634b3d0, internal_634b3d0, public_634b3d0);
extern "C" NAKED register_t __cdecl internal_634b3d0()
{
    __asm
    {
        inc dword ptr ds : [ecx+0x14]
        ret 4
        UNREACHABLE_TRAP(0x634b3d0)
    }
}
