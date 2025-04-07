#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579a90);

PROC_DECLARE(0x579a90, internal_579a90, public_579a90);
extern "C" NAKED register_t __cdecl internal_579a90()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x472], al
        ret 4
        UNREACHABLE_TRAP(0x579a90)
    }
}
