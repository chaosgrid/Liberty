#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6700);

PROC_DECLARE(0x62d6700, internal_62d6700, public_62d6700);
extern "C" NAKED register_t __cdecl internal_62d6700()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x38], al
        ret 4
        UNREACHABLE_TRAP(0x62d6700)
    }
}
