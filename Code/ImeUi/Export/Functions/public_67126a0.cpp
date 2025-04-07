#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67126a0);

PROC_DECLARE(0x67126a0, internal_67126a0, public_67126a0);
extern "C" NAKED register_t __cdecl internal_67126a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+8], 1
        mov byte ptr ds : [ecx+0x14], al
        ret 4
        UNREACHABLE_TRAP(0x67126a0)
    }
}
