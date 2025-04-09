#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d5d0);

PROC_DECLARE(0x58d5d0, internal_58d5d0, public_58d5d0);
extern "C" NAKED register_t __cdecl internal_58d5d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x54C], al
        ret 4
        UNREACHABLE_TRAP(0x58d5d0)
    }
}
