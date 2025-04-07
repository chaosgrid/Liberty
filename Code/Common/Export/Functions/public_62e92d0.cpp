#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e92d0);

PROC_DECLARE(0x62e92d0, internal_62e92d0, public_62e92d0);
extern "C" NAKED register_t __cdecl internal_62e92d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x17], al
        ret 4
        UNREACHABLE_TRAP(0x62e92d0)
    }
}
