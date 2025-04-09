#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);

PROC_DECLARE(0x41dda0, internal_41dda0, public_41dda0);
extern "C" NAKED register_t __cdecl internal_41dda0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_6107dc], al
        ret 
        UNREACHABLE_TRAP(0x41dda0)
    }
}
