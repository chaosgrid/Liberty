#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4287f0, internal_4287f0, public_4287f0);
extern "C" NAKED register_t __cdecl internal_4287f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        push ebx
        mov bl, byte ptr ss : [esp+8]
        mov dl, al
        xor dl, bl
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ecx+0xC], dl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4287f0)
    }
}
