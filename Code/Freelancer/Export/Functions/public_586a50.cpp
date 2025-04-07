#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586a50);

PROC_DECLARE(0x586a50, internal_586a50, public_586a50);
extern "C" NAKED register_t __cdecl internal_586a50()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x518]
        mov dl, byte ptr ss : [esp+4]
        shl dl, 3
        xor dl, al
        and dl, 8
        xor dl, al
        mov byte ptr ds : [ecx+0x518], dl
        ret 4
        UNREACHABLE_TRAP(0x586a50)
    }
}
