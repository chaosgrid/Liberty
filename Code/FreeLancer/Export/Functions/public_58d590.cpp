#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d590);

PROC_DECLARE(0x58d590, internal_58d590, public_58d590);
extern "C" NAKED register_t __cdecl internal_58d590()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x501], al
        mov byte ptr ds : [ecx+0x500], dl
        ret 8
        UNREACHABLE_TRAP(0x58d590)
    }
}
