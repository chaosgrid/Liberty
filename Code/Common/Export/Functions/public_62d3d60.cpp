#include "Common-PCH.h"

PROC_DECLARE(0x62d3d60, internal_62d3d60, public_62d3d60);
extern "C" NAKED register_t __cdecl internal_62d3d60()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xF9], al
        ret 4
        UNREACHABLE_TRAP(0x62d3d60)
    }
}
