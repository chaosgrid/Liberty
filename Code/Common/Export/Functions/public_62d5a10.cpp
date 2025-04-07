#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);

PROC_DECLARE(0x62d5a10, internal_62d5a10, public_62d5a10);
extern "C" NAKED register_t __cdecl internal_62d5a10()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x58], al
        ret 4
        UNREACHABLE_TRAP(0x62d5a10)
    }
}
