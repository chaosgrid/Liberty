#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579890);

PROC_DECLARE(0x579890, internal_579890, public_579890);
extern "C" NAKED register_t __cdecl internal_579890()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x470], al
        ret 4
        UNREACHABLE_TRAP(0x579890)
    }
}
