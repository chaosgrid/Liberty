#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa890, internal_6bfa890, public_6bfa890);
extern "C" NAKED register_t __cdecl internal_6bfa890()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 0x40
        mov word ptr ds : [ecx+0x2C], ax
        ret 4
        UNREACHABLE_TRAP(0x6bfa890)
    }
}
