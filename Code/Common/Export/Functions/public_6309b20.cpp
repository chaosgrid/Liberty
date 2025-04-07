#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b20);

PROC_DECLARE(0x6309b20, internal_6309b20, public_6309b20);
extern "C" NAKED register_t __cdecl internal_6309b20()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        mov word ptr ds : [ecx+2], ax
        ret 4
        UNREACHABLE_TRAP(0x6309b20)
    }
}
