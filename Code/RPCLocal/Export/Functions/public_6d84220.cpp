#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84220);

PROC_DECLARE(0x6d84220, internal_6d84220, public_6d84220);
extern "C" NAKED register_t __cdecl internal_6d84220()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x70]
        ret 
        UNREACHABLE_TRAP(0x6d84220)
    }
}
