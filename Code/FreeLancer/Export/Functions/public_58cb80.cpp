#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58cb80);

PROC_DECLARE(0x58cb80, internal_58cb80, public_58cb80);
extern "C" NAKED register_t __cdecl internal_58cb80()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x550], al
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x551], dl
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x552], al
        mov byte ptr ds : [ecx+0x553], dl
        ret 0x10
        UNREACHABLE_TRAP(0x58cb80)
    }
}
