#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4b90);

PROC_DECLARE(0x62d4b90, internal_62d4b90, public_62d4b90);
extern "C" NAKED register_t __cdecl internal_62d4b90()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xBC], al
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62d4b90)
    }
}
