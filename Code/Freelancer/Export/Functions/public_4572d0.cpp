#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4572d0);

PROC_DECLARE(0x4572d0, internal_4572d0, public_4572d0);
extern "C" NAKED register_t __cdecl internal_4572d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x75], al
        ret 4
        UNREACHABLE_TRAP(0x4572d0)
    }
}
