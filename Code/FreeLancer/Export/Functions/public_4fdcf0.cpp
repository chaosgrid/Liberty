#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fdcf0, internal_4fdcf0, public_4fdcf0);
extern "C" NAKED register_t __cdecl internal_4fdcf0()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+8]
        mov al, dl
        and dl, 0xFE
        and al, 1
        mov byte ptr ds : [ecx+8], dl
        ret 8
        UNREACHABLE_TRAP(0x4fdcf0)
    }
}
