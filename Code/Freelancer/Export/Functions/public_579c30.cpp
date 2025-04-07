#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579c30);

PROC_DECLARE(0x579c30, internal_579c30, public_579c30);
extern "C" NAKED register_t __cdecl internal_579c30()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x3FC]
        ret 
        UNREACHABLE_TRAP(0x579c30)
    }
}
