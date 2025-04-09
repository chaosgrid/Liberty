#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c920);

PROC_DECLARE(0x57c920, internal_57c920, public_57c920);
extern "C" NAKED register_t __cdecl internal_57c920()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x528], ax
        ret 4
        UNREACHABLE_TRAP(0x57c920)
    }
}
