#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263bd0);

PROC_DECLARE(0x6263bd0, internal_6263bd0, public_6263bd0);
extern "C" NAKED register_t __cdecl internal_6263bd0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x18], al
        ret 4
        UNREACHABLE_TRAP(0x6263bd0)
    }
}
