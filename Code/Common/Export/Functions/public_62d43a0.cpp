#include "Common-PCH.h"

PROC_DECLARE(0x62d43a0, internal_62d43a0, public_62d43a0);
extern "C" NAKED register_t __cdecl internal_62d43a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x150], al
        ret 4
        UNREACHABLE_TRAP(0x62d43a0)
    }
}
