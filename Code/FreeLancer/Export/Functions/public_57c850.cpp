#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c850);

PROC_DECLARE(0x57c850, internal_57c850, public_57c850);
extern "C" NAKED register_t __cdecl internal_57c850()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x52A], al
        ret 4
        UNREACHABLE_TRAP(0x57c850)
    }
}
