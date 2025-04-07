#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fc8f0);

PROC_DECLARE(0x4fc8f0, internal_4fc8f0, public_4fc8f0);
extern "C" NAKED register_t __cdecl internal_4fc8f0()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x70]
        mov al, byte ptr ss : [esp+4]
        shl al, 1
        xor al, dl
        and al, 2
        xor al, dl
        mov dl, byte ptr ss : [esp+8]
        shl dl, 2
        xor dl, al
        and dl, 4
        xor dl, al
        mov byte ptr ds : [ecx+0x70], dl
        ret 8
        UNREACHABLE_TRAP(0x4fc8f0)
    }
}
