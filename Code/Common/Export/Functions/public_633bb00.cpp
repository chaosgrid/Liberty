#include "Common-PCH.h"

PROC_DECLARE(0x633bb00, internal_633bb00, public_633bb00);
extern "C" NAKED register_t __cdecl internal_633bb00()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2C], al
        ret 4
        UNREACHABLE_TRAP(0x633bb00)
    }
}
