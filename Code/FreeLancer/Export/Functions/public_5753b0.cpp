#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5753b0);

PROC_DECLARE(0x5753b0, internal_5753b0, public_5753b0);
extern "C" NAKED register_t __cdecl internal_5753b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0xE3], 1
        mov byte ptr ds : [ecx+0xE4], al
        mov byte ptr ds : [ecx+0xE5], dl
        ret 8
        UNREACHABLE_TRAP(0x5753b0)
    }
}
