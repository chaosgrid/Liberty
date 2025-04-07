#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597550);

PROC_DECLARE(0x597550, internal_597550, public_597550);
extern "C" NAKED register_t __cdecl internal_597550()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x42C], al
        ret 4
        UNREACHABLE_TRAP(0x597550)
    }
}
