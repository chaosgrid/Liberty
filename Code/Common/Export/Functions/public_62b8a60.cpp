#include "Common-PCH.h"

PROC_DECLARE(0x62b8a60, internal_62b8a60, public_62b8a60);
extern "C" NAKED register_t __cdecl internal_62b8a60()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x1E4], al
        ret 4
        UNREACHABLE_TRAP(0x62b8a60)
    }
}
