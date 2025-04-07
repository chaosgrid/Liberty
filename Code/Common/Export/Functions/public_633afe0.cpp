#include "Common-PCH.h"

PROC_DECLARE(0x633afe0, internal_633afe0, public_633afe0);
extern "C" NAKED register_t __cdecl internal_633afe0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x64], al
        ret 4
        UNREACHABLE_TRAP(0x633afe0)
    }
}
