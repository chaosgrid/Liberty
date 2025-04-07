#include "Common-PCH.h"

PROC_DECLARE(0x633ae70, internal_633ae70, public_633ae70);
extern "C" NAKED register_t __cdecl internal_633ae70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        or al, 0x20
        mov byte ptr ds : [ecx+0x9C], al
        ret 4
        UNREACHABLE_TRAP(0x633ae70)
    }
}
