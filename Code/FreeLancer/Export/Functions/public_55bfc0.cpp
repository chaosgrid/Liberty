#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55bfc0);

PROC_DECLARE(0x55bfc0, internal_55bfc0, public_55bfc0);
extern "C" NAKED register_t __cdecl internal_55bfc0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x335], al
        ret 4
        UNREACHABLE_TRAP(0x55bfc0)
    }
}
