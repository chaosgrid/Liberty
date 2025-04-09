#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58cb70);

PROC_DECLARE(0x58cb70, internal_58cb70, public_58cb70);
extern "C" NAKED register_t __cdecl internal_58cb70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x54E], al
        ret 4
        UNREACHABLE_TRAP(0x58cb70)
    }
}
