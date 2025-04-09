#include "FreeLancer-PCH.h"

PROC_DECLARE(0x539c40, internal_539c40, public_539c40);
extern "C" NAKED register_t __cdecl internal_539c40()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x44]
        mov dl, byte ptr ss : [esp+4]
        shl dl, 1
        xor dl, al
        and dl, 2
        xor dl, al
        mov byte ptr ds : [ecx+0x44], dl
        ret 4
        UNREACHABLE_TRAP(0x539c40)
    }
}
