#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586a30);

PROC_DECLARE(0x586a30, internal_586a30, public_586a30);
extern "C" NAKED register_t __cdecl internal_586a30()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x518]
        mov dl, byte ptr ss : [esp+4]
        shl dl, 2
        xor dl, al
        and dl, 4
        xor dl, al
        mov byte ptr ds : [ecx+0x518], dl
        ret 4
        UNREACHABLE_TRAP(0x586a30)
    }
}
