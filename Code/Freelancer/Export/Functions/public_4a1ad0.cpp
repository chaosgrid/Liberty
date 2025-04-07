#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a1ad0);

PROC_DECLARE(0x4a1ad0, internal_4a1ad0, public_4a1ad0);
extern "C" NAKED register_t __cdecl internal_4a1ad0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [ecx], al
        mov al, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [ecx+1], dl
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+2], al
        mov byte ptr ds : [ecx+3], dl
        ret 0x10
        UNREACHABLE_TRAP(0x4a1ad0)
    }
}
