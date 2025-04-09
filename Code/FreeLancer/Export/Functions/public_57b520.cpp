#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b520);

PROC_DECLARE(0x57b520, internal_57b520, public_57b520);
extern "C" NAKED register_t __cdecl internal_57b520()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x494], al
        ret 4
        UNREACHABLE_TRAP(0x57b520)
    }
}
