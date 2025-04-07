#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579280);

PROC_DECLARE(0x579280, internal_579280, public_579280);
extern "C" NAKED register_t __cdecl internal_579280()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_67c3d9], al
        ret 
        UNREACHABLE_TRAP(0x579280)
    }
}
