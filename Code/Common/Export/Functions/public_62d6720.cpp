#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6720);

PROC_DECLARE(0x62d6720, internal_62d6720, public_62d6720);
extern "C" NAKED register_t __cdecl internal_62d6720()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x3A], al
        ret 4
        UNREACHABLE_TRAP(0x62d6720)
    }
}
