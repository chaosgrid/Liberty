#include "Common-PCH.h"

PROC_DECLARE(0x6295a10, internal_6295a10, public_6295a10);
extern "C" NAKED register_t __cdecl internal_6295a10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x54]
        ret 
        UNREACHABLE_TRAP(0x6295a10)
    }
}
