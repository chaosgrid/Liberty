#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53a9d0);

PROC_DECLARE(0x53a9d0, internal_53a9d0, public_53a9d0);
extern "C" NAKED register_t __cdecl internal_53a9d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xA4], al
        ret 4
        UNREACHABLE_TRAP(0x53a9d0)
    }
}
