#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579a50);

PROC_DECLARE(0x579a50, internal_579a50, public_579a50);
extern "C" NAKED register_t __cdecl internal_579a50()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x478], al
        ret 4
        UNREACHABLE_TRAP(0x579a50)
    }
}
