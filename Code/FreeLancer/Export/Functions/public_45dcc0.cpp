#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45dcc0);

PROC_DECLARE(0x45dcc0, internal_45dcc0, public_45dcc0);
extern "C" NAKED register_t __cdecl internal_45dcc0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x52F], al
        ret 4
        UNREACHABLE_TRAP(0x45dcc0)
    }
}
