#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579860);

PROC_DECLARE(0x579860, internal_579860, public_579860);
extern "C" NAKED register_t __cdecl internal_579860()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x402], al
        ret 4
        UNREACHABLE_TRAP(0x579860)
    }
}
